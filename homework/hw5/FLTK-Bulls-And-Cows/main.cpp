/*
main.cpp
Justyn P. Durnford
Created on 11/1/2019
Last updated on 11/1/2019
Main file for FLTK-Bulls-And-Cows
*/

#include "bulls-and-cows.hpp"
#include <FL/Fl.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_ask.h>

using std::vector;

vector<int> nums;
vector<int> guess;

int main()
{
	initVectors(nums, guess);
}