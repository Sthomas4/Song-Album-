//****************************************************
// File: Album.h
//
// Purpose: Headerfile for Album class.
//
// Written By: Sanal Thomas
//
// Compiler: Visual C++ 2017
//****************************************************

#ifndef ALBUM_H
#define ALBUM_H

#include <string>
#include "Artist.h"
#include "Song.h"

class Album
{
	private: 
		string Title; 
		Artist a; 
		Song Songarray[6]; 

	public:
		Album();

		string getTitle() { return Title; }
		Artist getArtist() { return a; }
		
		Time CalcTotalTime();
		void Read(string filename);
		void Write(string filename);
		void Display();

		void setTitle(string newTitle);
};

#endif