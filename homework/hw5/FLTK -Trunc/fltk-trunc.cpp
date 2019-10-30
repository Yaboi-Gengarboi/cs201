/*
fltk-trunc.cpp
Justyn P. Durnford
Created on 10/26/2019
Last Updated on 10/30/2019
*/

#include "truncstruct.hpp"
#include <FL/Fl.h>
#include <FL/Fl_Widget.h>
#include <FL/Fl_Window.h>
#include <FL/Fl_Button.h>
#include <FL/Fl_ask.h>



void window_callback(Fl_Widget* widget, void*) 
{
	if (fl_ask("Do you really want to quit?"))
		((Fl_Window*)widget)->hide();
}

void trunc_buttton_callback(Fl_Button* button, void*)
{

}

int main(int argc, char** argv)
{
	Fl_Window* window = new Fl_Window(400, 400);
	Fl_Button* truncButton = new Fl_Button(30, 30, 50, 50, "trunc");

	window->callback(window_callback);

	window->end();
	window->show(argc, argv);

	return Fl::run();
}