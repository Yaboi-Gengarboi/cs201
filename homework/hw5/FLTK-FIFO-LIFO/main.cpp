/*
main.cpp
Justyn P. Durnford
Created on 11/2/2019
Last updated on 11/2/2019
Main file for FLTK-FIFO-LIFO
*/

#include "fltk-fifo-lifo.hpp"
#include <FL/Fl.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_ask.h>

//Allows the window to close
void quit_callback(Fl_Widget* widget)
{
	if (fl_ask("Do you really want to quit?"))
		exit(0);
}

int main()
{
	Fl_Window* window = new Fl_Window(350, 150);
	window->callback(quit_callback);

	window->end();
	window->show();
	return Fl::run();
}