//****************************************************
// File: Time.h
//
// Purpose: Headerfile for Time class.
//
// Written By: Sanal Thomas
//
// Compiler: Visual C++ 2017
//****************************************************

#ifndef TIME_H
#define TIME_H

class Time
{
	private:
		int Minutes; 
		int Seconds; 

	public: 
		Time(); 

		int getMinutes() { return Minutes; }
		int	getSeconds() { return Seconds; }

		void setMinutes(int newMinutes);
		void setSeconds(int newSeconds);
		

};

#endif