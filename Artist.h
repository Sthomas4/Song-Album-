//****************************************************
// File: Artist.h
//
// Purpose: Headerfile for Artist class.
//
// Written By: Sanal Thomas
//
// Compiler: Visual C++ 2017
//****************************************************

#ifndef ARTIST_H
#define ARTIST_H

#include <string>
using namespace std;

class Artist
{
	private:
		string artistName;
		string CountryOfOrigins;

	public:
		Artist();
		
		string getName() { return artistName; }
		string getCountryOfOrigins() { return CountryOfOrigins; }

		
		void setName(string newartistName); 
		void setCountyOfOrigins(string newCountryOfOrigins); 

};

#endif