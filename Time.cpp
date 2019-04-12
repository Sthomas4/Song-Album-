//****************************************************
// File: Time.cpp
//
// Purpose: Function definitions.
//
// Written By: Sanal Thomas
//
// Compiler: Visual C++ 2017
//****************************************************

#include "Time.h" 

//*******************************************************************************
// Function: Time
//
// Purpose: Sets minutes and seconds to 0.
//*******************************************************************************

Time::Time()
{
	Minutes = 0;
	Seconds = 0; 
}

//*******************************************************************************
// Function: setMinutes
//
// Purpose: Sets minutes to a new variable.
//*******************************************************************************

void Time::setMinutes(int newMinutes)
{
	Minutes = newMinutes;
}

//*******************************************************************************
// Function: setSeconds
//
// Purpose: Sets seconds to a new variable.
//*******************************************************************************

void Time::setSeconds(int newSeconds)
{
	Seconds = newSeconds;
}

