/*
fltk-trunc.cpp
Justyn P. Durnford
Created on 10/26/2019
Last Updated on 10/26/2019
*/

#include "truncstruct.hpp"
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

int main(int argc, char** argv)
{
	Fl_Window* window = new Fl_Window(400, 400);
	Fl_Button* truncButton = new Fl_Button(30, 30, 50, 50, "trunc");
	Fl_Button* quitButton = new Fl_Button(90, 30, 50, 50, "quit");

	window->end();
	window->show(argc, argv);

	return Fl::run();
}