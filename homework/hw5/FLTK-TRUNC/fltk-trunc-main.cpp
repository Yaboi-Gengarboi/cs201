/*
fltk-trunc-main.cpp
Justyn P. Durnford
Created on 10/30/2019
Last Updated on 10/30/2019
*/

#include <FL/Fl.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_ask.H>

void window_callback(Fl_Widget* widget)
{
	if (fl_ask("Do you really want to quit?"))
		((Fl_Window*)widget)->hide();
}

void trunc_callback(Fl_Button* button)
{

}

void quit_callback(Fl_Button* button)
{

}

int main()
{
	Fl_Window* window = new Fl_Window(400, 400);
	window->callback(window_callback);

	//String input
	Fl_Input* textInput = new Fl_Input(50, 100, 300, 25);

	//Int input
	Fl_Input* truncInput = new Fl_Input(300, 130, 50, 25);

	Fl_Button* truncButton = new Fl_Button(50, 170, 60, 60, "TRUNC");

	Fl_Button* quitButton = new Fl_Button(120, 170, 60, 60, "QUIT");


	window->end();
	window->show();
	return Fl::run();
}