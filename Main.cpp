//****************************************************************************************
// File: Main.cpp
//
// Purpose: Displays a menu and take action depending on what the user enters.
//
// Written By: Sanal Thomas
//
// Compiler: Visual C++ 2017
//****************************************************************************************

#include "Album.h"
#include <iostream>
#include <fstream>
#include <String>
using namespace std; 

//*******************************************************************************
// Function: Main
//
// Purpose: Displays a menu. Asks user for their input. Gets data from functions.
//*******************************************************************************

int main() {

	
	Album a;
	string filename;
	Time t;

	int choice;
	choice = 0;

	while (choice != 5)
	{
		cout << "Album Program\n" << "-------------" << endl;
		cout << "1 - Read album info from file" << endl;
		cout << "2 - Write album info to a file" << endl;
		cout << "3 - Show all album info on screen " << endl;
		cout << "4 - Show album time on screen" << endl;
		cout << "5 - Exit" << endl;
		cout << "Enter Choice: ";
		cin >> choice;
		cout << endl;

		if (choice == 1) 
		{
			a.Read(filename);
		}

		if (choice == 2)
		{
			a.Write(filename);
		}

		if (choice == 3)
		{
			a.Display();
		}

		if (choice == 4)
		{
			t = a.CalcTotalTime();

			cout << "Album Time: " << t.getMinutes() << ":" << t.getSeconds() << endl;
		}


		cout << endl;
	}

	return 0;
}