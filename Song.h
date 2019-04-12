//****************************************************
// File: Song.h
//
// Purpose: Headerfile for Song class.
//
// Written By: Sanal Thomas
//
// Compiler: Visual C++ 2017
//****************************************************

#ifndef SONG_H
#define SONG_H


#include <string>
#include "Time.h"
using namespace std; 

class Song
{
	private: 
		string title;
		Time length; 
	
	public:
		Song();

		string getTitle() { return title; }
		Time getTime() { return length; }
		
		void setTitle(string newTitle);
		void setTime(Time newTime);
};

#endif