/*
fltk-trunc-main.cpp
Justyn P. Durnford
Created on 10/30/2019
Last Updated on 10/30/2019
*/

#include <FL/Fl.h>
#include <FL/Fl_Widget.h>
#include <FL/Fl_Window.h>
#include <FL/Fl_Box.h>
#include <FL/Fl_Button.h>
#include <FL/Fl_ask.h>

void window_callback(Fl_Widget* widget, void*)
{
	if (fl_ask("Do you really want to quit?"))
		((Fl_Window*)widget)->hide();
}

void trunc_callback(Fl_Button* button, void*)
{

}

int main()
{
	Fl_Window* window = new Fl_Window(400, 400);
	window->callback(window_callback);

	Fl_Button* truncButton = new Fl_Button(50, 50, 60, 60, "TRUNC");

	Fl_Button* quitButton = new Fl_Button(120, 50, 60, 60, "QUIT");


	window->end();
	window->show();
	return Fl::run();
}