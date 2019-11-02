/*
main.cpp
Justyn P. Durnford
Created on 11/1/2019
Last updated on 11/2/2019
Main file for FLTK-Bulls-And-Cows
*/

#include "bulls-and-cows.hpp"
#include <string>
#include <sstream>

#include <FL/Fl.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_ask.h>

using std::vector;
using std::string;
using std::istringstream;

vector<int> nums;
vector<int> guess;
int common;

Fl_Input* input;
Fl_Output* output;

//Allows the window to close
void quit_callback(Fl_Widget* widget)
{
	if (fl_ask("Do you really want to quit?"))
		exit(0);
}

/*
Calls compareDigits in bulls-and-cows.cpp
and assigns the result to common, which will
be evaluated.
*/
void guess_callback(Fl_Widget* widget)
{
	string str = input->value();
	istringstream istream(str);
	int num;

	istream >> num;
	if (!istream)
	{
		output->value("Please enter 4 positive digits");
	}
	else
	{
		if (num > 9999)
			output->value("Please enter 4 positive digits");
		else if (num < 0)
			output->value("Please enter 4 positive digits");
		else
		{
			for (int i = 0; i < 4; i++)
			{
				guess[i] = num % 10;
				num /= 10;
			}

			string out = "4 Cows";

			switch (compareDigits(nums, guess))
			{
				case 0:
					out = "4 Cows";
					break;
				case 1:
					out = "1 Bull, 3 Cows";
					break;
				case 2:
					out = "2 Bulls, 2 Cows";
					break;
				case 3:
					out = "3 Bulls, 1 Cow";
					break;
				case 4:
					out = "4 Bulls. You Win!";
					break;
				default:
					break;
			}
			output->value(out.c_str());
		}
	}
}

int main()
{
	initVectors(nums, guess);

	Fl_Window* window = new Fl_Window(350, 150);
	window->callback(quit_callback);

	output = new Fl_Output(30, 20, 200, 40);
	output->value("Enter 4 positive digits");

	input = new Fl_Input(240, 20, 80, 40);

	Fl_Button* guessButton = new Fl_Button(110, 70, 60, 60, "GUESS");
	guessButton->callback(guess_callback);

	Fl_Button* quitButton = new Fl_Button(180, 70, 60, 60, "QUIT");
	quitButton->callback(quit_callback);

	window->end();
	window->show();
	return Fl::run();
}