//************************************************
// File: Song.cpp
//
// Purpose: Function definitions 
//
// Written By: Sanal Thomas
//
// Compiler: Visual C++ 2017
//*************************************************

#include "Song.h"

//***********************************************************
// Function: Song
//
// Purpose: Sets song title and time to NULL.
//*********************************************************** 

Song::Song()
{
	title = " ";
	length.setMinutes(0);
	length.setSeconds(0);
}

//***********************************************************
// Function: setTitle
//
// Purpose: Sets song title to a new variable.
//*********************************************************** 

void Song::setTitle(string newTitle)
{
	title = newTitle;
}

//***********************************************************
// Function: setTime
//
// Purpose: Sets time to variable length 
//*********************************************************** 

void Song::setTime(Time t)
{
	length = t;
}


