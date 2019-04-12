//****************************************************
// File: Artist.cpp
//
// Purpose: Function definitions.
//
// Written By: Sanal Thomas
//
// Compiler: Visual C++ 2017
//****************************************************

#include "Artist.h"

//*******************************************************************************
// Function: Artist
//
// Purpose: Sets artist name and country to NULL values.
//*******************************************************************************

Artist::Artist()
{
	artistName = " ";
	CountryOfOrigins = " "; 
}

//*******************************************************************************
// Function: setName
//
// Purpose: Sets artist name to a new variable.
//*******************************************************************************

void Artist::setName(string newartistName)
{
	artistName = newartistName; 
}

//*******************************************************************************
// Function: setCountryofOrigins
//
// Purpose: Sets country to a new variable.
//*******************************************************************************

void Artist::setCountyOfOrigins(string newCountryOfOrigins)
{
	CountryOfOrigins = newCountryOfOrigins; 
}



