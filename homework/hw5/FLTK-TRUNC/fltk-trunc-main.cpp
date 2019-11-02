/*
fltk-trunc-main.cpp
Justyn P. Durnford
Created on 10/30/2019
Last Updated on 11/2/2019
*/

#include "truncstruct.hpp"

#include <sstream>

#include <FL/Fl.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_ask.h>

using std::string;
using std::istringstream;

Fl_Box* box;
Fl_Input* textInput;
Fl_Input* truncInput;
StringInfo SI{ "", 0 };

void quit_callback(Fl_Widget* widget)
{
	if (fl_ask("Do you really want to quit?"))
		exit(0);
}

void trunc_callback(Fl_Widget* widget)
{
	string str = textInput->value();
	string str2 = truncInput->value();

	istringstream istream(str2);
	size_t len;
	istream >> len;

	if (!istream)
	{
		box->label("Please enter a positive integer.");
	}
	else
	{
		SI.str = str;
		SI.len = len;
		SI = trunc(SI);
		const char* text = SI.str.c_str();
		box->label(text);
	}
}

int main()
{
	Fl_Window* window = new Fl_Window(400, 400);
	window->callback(quit_callback);

	box = new Fl_Box(50, 20, 300, 70);
	box->label("Enter a string and an integer");
	box->box(FL_BORDER_BOX);

	//String input
	textInput = new Fl_Input(50, 100, 300, 25);
	//Int input
	truncInput = new Fl_Input(300, 130, 50, 25);

	Fl_Button* truncButton = new Fl_Button(50, 170, 60, 60, "TRUNC");
	truncButton->callback(trunc_callback);

	Fl_Button* quitButton = new Fl_Button(120, 170, 60, 60, "QUIT");
	quitButton->callback(quit_callback);

	window->end();
	window->show();
	return Fl::run();
}