#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
#include <vector>
#include <stdlib.h>

#include <FL/Fl.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/fl_ask.H>

using namespace std;

Fl_Window *win;
Fl_Menu_Bar *menubar;

void closeCB(Fl_Widget *w, void* p)
{
	Fl_Window *win = (Fl_Window *)w;

	if (fl_choice("Unsaved file, exit anyway", fl_no, fl_yes, 0) == 1)
	{
		win->hide();
	}
}

void torsoCB(Fl_Widget *w, void* p)
{}

void headCB(Fl_Widget *w, void* p)
{}

void armCB(Fl_Widget *w, void* p)
{}

void locomotorCB(Fl_Widget *w, void* p)
{}

void batteryCB(Fl_Widget *w, void* p)
{}

void newCB(Fl_Widget *w, void* p)
{}

void openCB(Fl_Widget *w, void* p)
{}

void saveCB(Fl_Widget *w, void* p)
{}

void orderCB(Fl_Widget *w, void* p)
{}

void saleCB(Fl_Widget *w, void* p)
{}

void customerCB(Fl_Widget *w, void* p)
{}

void robotModelCB(Fl_Widget *w, void* p)
{}

void robotCompCB(Fl_Widget *w, void* p)
{}

Fl_Menu_Item menuitems[] = {
	{"&File", 0,0,0,FL_SUBMENU},
		{"&New", FL_ALT + 'n', (Fl_Callback*)newCB},
		{ "&Open", FL_ALT + 'o', (Fl_Callback*)openCB },
		{ "&Save", FL_ALT + 's', (Fl_Callback*)saveCB },
		{ "&Quit", FL_ALT + 'q', (Fl_Callback*)closeCB },
		{0},
	{"&Edit",0,0,0, FL_SUBMENU},
	{0},
	{"&Create",0,0,0,FL_SUBMENU},
		{"&Order",0,(Fl_Callback*)orderCB},
		{ "&Customer",0,(Fl_Callback*)customerCB },
		{ "&Sale Associate",0,(Fl_Callback*)saleCB },
		{ "&Robot Model",0,(Fl_Callback*)robotModelCB },
		{ "&Robot Component",0,0,0, FL_SUBMENU},
			{"&Torso",0, (Fl_Callback*)torsoCB},
			{ "&Head",0, (Fl_Callback*)headCB },
			{ "&Arm",0, (Fl_Callback*)armCB },
			{ "&Locomotor",0, (Fl_Callback*)locomotorCB },
			{ "&Battery",0, (Fl_Callback*)batteryCB },
			{0},
			{0},
	{"&Report", 0,0,0,FL_SUBMENU},
		{"&Order",0,(Fl_Callback*)orderCB},
		{ "&Customer",0,(Fl_Callback*)customerCB },
		{ "&Sale Associate",0,(Fl_Callback*)saleCB },
		{ "&Robot Model",0,(Fl_Callback*)robotModelCB },
		{ "&Robot Component",0,(Fl_Callback*)robotCompCB},
		{0},
	{0}
};

int main() {
	win = new Fl_Window(640, 480, "Robot Robbie Shop");
	menubar = new Fl_Menu_Bar(0, 0, 640, 30);
	menubar->menu(menuitems);
	win->callback(closeCB);

	win->end();
	win->show();
	return(Fl::run());
}