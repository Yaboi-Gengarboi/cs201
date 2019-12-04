/*
Games.cpp
Justyn P. Durnford
CS 201
Created on 12/2/2019
Last Updated on 12/2/2019
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;
using std::toupper;

#include <array>
using std::array;

#include <map>
using std::map;

#include <random>
using std::random_device;
using std::default_random_engine;
using std::uniform_int_distribution;

#include <cctype>
using std::isalpha;

#include <stdexcept>
using std::invalid_argument;

//Prompts the user to enter a letter.
char getCharInput()
{
	char ch;
	string line;
	bool cont = true;

	while (cont)
	{
		cout << "Enter a letter" << endl;
		getline(cin, line);
		if (!line.empty())
		{
			if (isalpha(line[0]))
			{
				ch = toupper(line[0]);
				cont = false;
			}
			else
				cont = true;
		}
	}

	return ch;
}

/*
Looks if the character from getInput is in
the word and corrects guess accordingly.
*/
bool checkGuess(const string& word, string& guess, map<char, bool>& letters)
{
	bool retVal = false;
	char ch = getCharInput();
	letters[ch] = false;
	size_t found = word.find(ch);

	//Checks for ch multiple times
	while (found != -1)
	{
		letters[ch] = true;
		guess[found] = ch;
		found = word.find(ch, found + 1);
		retVal = true;
	}

	return retVal;
}

/*
Prints the hangman that depends on how
many guesses the person has gotten
wrong.
*/
void printHangman(int wrong)
{
	cout << "   _________" << endl;
	cout << "   |       |" << endl;
	cout << "   |       ";
	if (wrong > 0)
		cout << "O";
	cout << endl;
	cout << "   |      ";
	if (wrong > 1)
		cout << "/";
	if (wrong > 2)
		cout << "|";
	if (wrong > 3)
		cout << "\\";
	cout << endl;
	cout << "   |      ";
	if (wrong > 4)
		cout << "/";
	if (wrong > 5)
		cout << " \\";
	cout << endl;
	cout << "___|___" << endl;
}

void playHangman()
{
	array<string, 52> words =
	{
		"ANGEL", "APPLE", "BAGEL", "BANANA",
		"CANDY", "COMPUTER", "DANGER", "DELETE",
		"EAGLE", "EATEN", "FAVORITE", "FISHING",
		"GAMING", "GREAT", "HAIKU", "HAPPY", 
		"IDEAL", "IVORY", "JOURNAL", "JUNGLE",
		"KAYAK", "KLUTZ", "LENGTH", "LITTLE",
		"MAPLE", "MEMORY", "NEARBY", "NICKEL",
		"OCEAN", "OXYGEN", "PAJAMAS", "PIXEL",
		"QUEEN", "QUICK", "RHYTHM", "ROGUE",
		"SPHINX", "SHOVEL", "TODAY", "TWENTY",
		"ULTIMATE", "UNWIND", "VALOR", "VIOLIN",
		"WESTERN", "WONDER", "XENON", "XYLOPHONE",
		"YOGURT", "YOUNG", "ZIGZAG", "ZOMBIE"
	};

	string word = "";
	string guess = "";
	int wrong = 0;

	map <char, bool> letters;

	random_device rDev;
	default_random_engine engine(rDev());
	uniform_int_distribution<int> uniform_dist(0, words.size() - 1);

	word = words[uniform_dist(engine)];
	for (size_t i = 0; i < word.size(); ++i)
		guess += "_";

	printHangman(0);
	cout << endl;
	cout << guess << " (" << guess.size() << ") letters" << endl;

	while (guess != word && wrong < 6)
	{
		if (checkGuess(word, guess, letters))
		{
			printHangman(wrong);
			cout << guess << "(" << guess.size() << ") letters" << endl;
			cout << "Wrong letters used: ";
			for (const auto& letter : letters)
			{
				if (!letter.second)
					cout << letter.first;
			}
			cout << endl;
		}
		else
		{
			++wrong;
			printHangman(wrong);
			cout << guess << "(" << guess.size() << ") letters" << endl;
			cout << "Wrong letters used: ";
			for (const auto& letter : letters)
			{
				if (!letter.second)
					cout << letter.first;
			}
			cout << endl;
			if (wrong == 6)
				cout << "Game Over!" << endl;
		}
	}

	cout << "The word was " << word << endl;
}

int switchPlayer(int pInt)
{
	switch (pInt)
	{
		case 1:
			return 2;
			break;
		default:
			return 1;
			break;
	}
	
	return -1;
}

//Prompts the user to enter a valid space on the board
//and returns two integers that correspond to vertical
//and horizontal location respectively.
//Requires the current player.
array<int, 2> getSpaceInput(const int& currentPlayer)
{
	array<int, 2> arr = { 0, 0 };
	string line;
	char c;
	int n;
	bool cont = true;

	while (cont)
	{
		cout << "PLAYER " << currentPlayer << ", Enter a space" << endl;
		getline(cin, line);
		if (line.size() == 2)
		{
			try
			{
				c = line[0];
				n = stoi(line.substr(1));
				switch (c) //Column
				{
					case 'A':
						arr[1] = 0;
						break;
					case 'B':
						arr[1] = 1;
						break;
					case 'C':
						arr[1] = 2;
						break;
					default:
						throw invalid_argument(""); //Invalid input
						break;
				}
				if (n < 1 || n > 3)
					throw invalid_argument(""); //Invalid input
				else
					arr[0] = --n;
				cont = false;
			}
			catch (invalid_argument& ia)
			{
				cout << "Invalid input. Try again" << endl;
				cont = true;
			}
		}
		else
		{
			cout << "Invalid input. Try again" << endl;
			cont = true;
		}
	}

	return arr;
}

//Loops through each spot on the board and checks if it is full
//Returns true if the board is full.
//Returns false otherwise.
bool isBoardFull(const array<array<char, 3>, 3>& board)
{
	for (auto arr : board)
	{
		for (char c : arr)
		{
			if (c == ' ')
				return false;
		}
	}

	return true;
}

//Prints the TicTacToe board
void printBoard(const const array<array<char, 3>, 3>& board)
{
	cout << "   A  B  C" << endl;
	for (int i = 0; i < 3; ++i)
	{
		cout << i + 1<< "  ";
		for (char c : board[i])
			cout << c << "  ";
		cout << endl;
	}
}

//Determins if a player has won
//Returns 1 if player 1 (X) has won
//Returns 2 if player 2 (O) has won
//Returns 0 if no player has won
int hasPlayerWon(const array<array<char, 3>, 3>& board)
{
	for (int i = 0; i < 3; ++i)
	{
		//Checks rows
		if (board[i][0] == board[i][1] &&
			board[i][0] == board[i][2] &&
			board[i][0] == 'X')
			return 1;
		else if (board[i][0] == board[i][1] &&
				 board[i][0] == board[i][2] && 
				 board[i][0] == 'O')
			return 2;
		//Checks columns
		else if (board[0][i] == board[1][i] &&
				 board[0][i] == board[2][i] &&
				 board[0][i] == 'X')
			return 1;
		else if (board[0][i] == board[1][i] &&
				 board[0][i] == board[2][i] &&
				 board[0][i] == 'O')
			return 2;
	}

	//Checks down-right diagonal
	if (board[0][0] == board[1][1] &&
		board[0][0] == board[2][2] &&
		board[0][0] == 'X')
		return 1;
	else if (board[0][0] == board[1][1] &&
			 board[0][0] == board[2][2] &&
			 board[0][0] == 'O')
		return 2;
	//Checks down-left diagonal
	else if (board[0][2] == board[1][1] &&
			 board[0][2] == board[2][0] &&
			 board[0][2] == 'X')
		return 1;
	else if (board[0][2] == board[1][1] &&
			 board[0][2] == board[2][0] &&
			 board[0][2] == 'O')
		return 2;

	return 0;
}

void playTicTacToe()
{
	array<array<char, 3>, 3> board = { { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' } } };

	random_device rDev;
	default_random_engine engine(rDev());
	uniform_int_distribution<int> uniform_dist(1, 2);

	int currentPlayer = uniform_dist(engine);
	bool cont = true;

	while (cont && !isBoardFull(board))
	{
		cout << "PLAYER " << currentPlayer << ", Enter a space" << endl;
	}
}

int chooseGame()
{
	string input;
	int ret = -1;

	while (ret == -1)
	{
		cout << "Enter 1 to play Hangman" << endl;
		cout << "Enter 2 to play TicTacToe" << endl;
		cout << "Enter 0 to quit" << endl;
		getline(cin, input);

		if (!input.empty())
		{
			try
			{
				ret = stoi(input);
				switch (ret)
				{
					case 1:
						return ret;
						break;
					case 2:
						return ret;
						break;
					case 0:
						return ret;
						break;
					default :
						cout << "Invalid input, try again" << endl;
						ret = -1;
						break;
				}
			}
			catch (invalid_argument & ia)
			{
				cout << "Invalid input, try again" << endl;
				ret = -1;
			}
		}
		else
		{
			cout << "Invalid input, try again" << endl;
			ret = -1;
		}
	}

	return ret;
}

int main()
{
	/*
	int choose = -1;

	while (choose != 0)
	{
		choose = chooseGame();
		switch (choose)
		{
			case 1:
				playHangman();
				break;
			case 2:
				break;
			case 0:
				break;
		}
	}
	*/

	array<array<char, 3>, 3> board = { { { 'O', ' ', ' ' }, { ' ', 'O', ' ' }, { ' ', ' ', 'O' } } };

	printBoard(board);
	cout << isBoardFull(board) << endl;
	cout << hasPlayerWon(board) << endl;
	array<int, 2> arr = getSpaceInput(1);
	cout << arr[0] << ", " << arr[1] << endl;
	board[arr[0]][arr[1]] = 'X';
	printBoard(board);

	return 0;
}