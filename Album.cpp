//****************************************************************************************
// File: Album.cpp
//
// Purpose: Function definitions 
//
// Written By: Sanal Thomas
//
// Compiler: Visual C++ 2017
//****************************************************************************************

#include "Album.h"
#include "Time.h"
#include "Artist.h"
#include "Song.h"
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

//***********************************************************
// Function: Album
//
// Purpose: Sets title, time, artist name, country to NULL.
//***********************************************************

Album::Album() 
{
	Title = " "; 
	Time length; 
	a.setName(" ");
	a.setCountyOfOrigins(" "); 

	int i = 0; 
	Songarray[i]; 
}

//***********************************************************
// Function: setTitle
//
// Purpose: Sets album title.
//***********************************************************

void Album::setTitle(string newTitle)
{
	Title = newTitle; 
}

//***********************************************************
// Function: CalcTotalTime
//
// Purpose: Calculates total time.
//***********************************************************

Time Album::CalcTotalTime()
{
	Time t;
	int Minutes = 0;
	int Seconds = 0; 

	for (int i = 0; i < 6; i++)
	{
		Minutes += Songarray[i].getTime().getMinutes();
		Seconds += Songarray[i].getTime().getSeconds();

		if (Seconds > 60)
		{
			Minutes += Seconds / 60;
			Seconds %= 60;
		}
	}

	t.setMinutes(Minutes);
	t.setSeconds(Seconds);
	return t; 
}

//***********************************************************
// Function: Read
//
// Purpose: Reads data from file.
//***********************************************************

void Album::Read(string filename)
{
	
	Time t; 
	string data;
	int timedata;
	ifstream file;
	string inputfilename;
	cout << "Enter input filename: " << endl; 
	cin >> inputfilename;
	file.open(inputfilename);

	getline(file, Title); // gets album title
	getline(file, data);
	a.setName(data); // gets artist name 
	getline(file, data);
	a.setCountyOfOrigins(data); // get country 

	for (int i = 0; i < 6; i++)
	{
		getline(file, data);
		Songarray[i].setTitle(data); 
		file >> timedata;
		t.setMinutes(timedata); 
		file >> timedata;
		t.setSeconds(timedata);
		getline(file, data);
		Songarray[i].setTime(t);
	}

}

//***********************************************************
// Function: Write
//
// Purpose: Writes data to a file.
//***********************************************************

void Album::Write(string filename)
{
	ofstream outfile;
	string outputfilename;
	cout << "Enter output filename: " << endl; 
	cin >> outputfilename; 

	outfile.open(outputfilename);
	outfile << getTitle() << endl; 
	outfile << a.getName() << endl; 
	outfile << a.getCountryOfOrigins() << endl; 

	for (int i = 0; i < 6; i++)
	{
		outfile << Songarray[i].getTitle() << endl;
		outfile << Songarray[i].getTime().getMinutes() << endl;
		outfile << Songarray[i].getTime().getSeconds() << endl; 
	}

}

//***********************************************************
// Function: Display
//
// Purpose: Displays output to screen.
//***********************************************************

void Album::Display()
{
	cout << "Title: " << Title << endl; 
	cout << "Artist: " << a.getName() << endl;
	cout << "Country: " << a.getCountryOfOrigins() << endl; 

	cout << endl; 

	for (int i = 0; i < 6; i++)
	{
		cout << left << setw(20) << Songarray[i].getTitle() <<
			Songarray[i].getTime().getMinutes() << ":";

			
		if (Songarray[i].getTime().getSeconds() <= 9)
		{
			cout << "0" << Songarray[i].getTime().getSeconds() << endl;
		}

		else cout << Songarray[i].getTime().getSeconds() << endl; 
	}
}