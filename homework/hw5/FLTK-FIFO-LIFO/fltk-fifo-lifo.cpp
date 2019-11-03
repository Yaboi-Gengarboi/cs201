/*
fltk-fifo-lifo.cpp
Justyn P. Durnford
Created on 11/2/2019
Last updated on 11/2/2019
*/

#include <vector>
#include <string>

#include <FL/Fl.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Multiline_Output.H>
#include <FL/Fl_ask.h>

using std::vector;
using std::string;

Fl_Input* input;
Fl_Multiline_Output* output;
Fl_Button* modeButton;
vector<string> items;
bool isFIFO = true;

//Returns true if the vector is empty
bool isContainerEmpty(const vector<string>& container)
{
	if (container.size() == 0)
	{
		return true;
	}
	return false;
}

//Builds a string that contains every item in the vector
string toString(const vector<string>& container)
{
	string out = "";
	for (string item : container)
		out += item + ", ";
	if (!out.empty())
	{
		out.pop_back();
		out.pop_back();
	}
	return out;
}

//Switches from FIFO to LIFO and vise versa
void switchMode(Fl_Widget* widget)
{
	if (isFIFO)
		modeButton->label("LIFO");
	else
		modeButton->label("FIFO");
	isFIFO = !isFIFO;
}

//Allows the window to close
void quit_callback(Fl_Widget* widget)
{
	if (fl_ask("Do you really want to quit?"))
		exit(0);
}

//Adds item to the vector
void push_callback(Fl_Widget* widget)
{
	items.push_back(input->value());
	output->value(toString(items).c_str());
}

//Removes item from the vector
void pop_callback(Fl_Widget* widget)
{
	if (!isContainerEmpty(items))
	{
		if (isFIFO)
		{
			items.erase(items.begin());
			output->value(toString(items).c_str());
		}
		else
		{
			items.pop_back();
			output->value(toString(items).c_str());
		}
	}
}

int main()
{
	Fl_Window* window = new Fl_Window(400, 450);
	window->callback(quit_callback);

	modeButton = new Fl_Button(350, 10, 40, 40);
	modeButton->label("FIFO");
	modeButton->callback(switchMode);

	output = new Fl_Multiline_Output(30, 60, 340, 200);
	input = new Fl_Input(30, 280, 340, 50);

	Fl_Button* pushButton = new Fl_Button(130, 350, 60, 60, "PUSH");
	pushButton->callback(push_callback);

	Fl_Button* popButton = new Fl_Button(210, 350, 60, 60, "POP");
	popButton->callback(pop_callback);

	window->end();
	window->show();
	return Fl::run();
}