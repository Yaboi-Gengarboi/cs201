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
#include <FL/Fl_ask.h>

using std::vector;
using std::string;
using std::istringstream;

vector<int> nums;
vector<int> guess;
int common;

Fl_Box* box;
Fl_Input* input;

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
	int guessInput;

	istream >> guessInput;
	if (!istream)
	{

	}
	else
	{

	}

	common = compareDigits(nums, guess);
	string out = "" + common;
	box->label(out.c_str());
}

int main()
{
	initVectors(nums, guess);

	Fl_Window* window = new Fl_Window(400, 400);
	window->callback(quit_callback);

	box = new Fl_Box(50, 20, 300, 70);
	box->label("Enter 4 digits");
	box->box(FL_BORDER_BOX);



	window->end();
	window->show();
	return Fl::run();
}