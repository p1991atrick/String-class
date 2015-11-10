//
//  myString.cpp
//  Project 2
//
//  Created by Gordon Freeman on 10/13/15.
//  Copyright © 2015 Patrick Kelly. All rights reserved.
//
/* -----------------------------------------------------------------------------
 
 FILE:              myString.cpp
 
 DESCRIPTION:       Custom string class
 
 COMPILER:          MSVS2013 and GNU g++
 
 NOTES:             None
 
 MODIFICATION HISTORY:
 
 Author                  Date               Version
 ---------------         ----------         --------------
 Patrick Kelly           2015-10-15         1.0
 Patrick Kelly           2015-11-2          2.0
 ----------------------------------------------------------------------------- */
#include "myString.h"
#include <iostream>
#include "My_Macros.h"
#include <cstring>

using namespace std;

/* -----------------------------------------------------------------------------
 FUNCTION:          mystring()
 DESCRIPTION:       default constructor for myString
 RETURNS:           Void function
 NOTES:
 ----------------------------------------------------------------------------- */
myString::myString()
{
    //default data null
    data = new char[1];
    data[0]=0;
    //buffer to 0
    bfrsz = 1;
}

/* -----------------------------------------------------------------------------
 FUNCTION:          mystring(const char* s)
 DESCRIPTION:       default overloaded constructor for myString
 RETURNS:           Void function
 NOTES:
 ----------------------------------------------------------------------------- */
myString::myString(const char* s)
{
    //set buffer size to length of string
    bfrsz = (int)std::strlen(s);
    //initialize data size and clear it
    data = new char[bfrsz + 1];
    data[bfrsz] = 0;
    //load s into data
    strncpy(data, s, bfrsz);
}

/* -----------------------------------------------------------------------------
 FUNCTION:          mystring(const myString& str)
 DESCRIPTION:       Copy constructor for class
 RETURNS:           Void function
 NOTES:
 ----------------------------------------------------------------------------- */
myString::myString(const myString& str)
{
    //initialize buffer size
    bfrsz = *new int; strlen(str.data);
    //initialize data cstring to 
    data = new char[bfrsz +1];
    data[bfrsz]=0;
    //copy to data cstring
    strncpy(data, str.data, bfrsz);
}

/* -----------------------------------------------------------------------------
 FUNCTION:          ~mystring()
 DESCRIPTION:       destructor for class
 RETURNS:           Void function
 NOTES:
 ----------------------------------------------------------------------------- */
myString::~myString()
{
    //destructor
#if SHOW_TRACE
    cout << "in destructor\n";
#endif
    //removes char's stored in data
    delete[] data;
}

/* -----------------------------------------------------------------------------
 FUNCTION:          myString& append(const char* s)
 DESCRIPTION:       append function for class
 RETURNS:           the final object after adding the cstrings together
 NOTES:
 ----------------------------------------------------------------------------- */
myString& myString::append(const char *s)
{
#if SHOW_TRACE
    cout << "in append\n";
#endif
    //create temp pointer for original string
    char *tempstring = new char(bfrsz+1);
    tempstring[bfrsz] = 0;
    
    //copy data into tempsting
    strncpy(tempstring, data, bfrsz+1);
    
    //empty data
    delete[] data;
    
    //reset data size to *s + data
    data = new char(bfrsz + strlen(s) + 1);
    data[bfrsz] = 0;
    
    //load tempstring back into data
    strncpy(data, tempstring, bfrsz+1);
    delete[] tempstring;
    
    //append *s on to data
    strcat(data, s);
    bfrsz = int(bfrsz + strlen(s));
    
    return *this;
}

/* -----------------------------------------------------------------------------
 FUNCTION:          size_t myString::capacity() const
 DESCRIPTION:       bfrsz size in an int
 RETURNS:           bfrsz
 NOTES:
 ----------------------------------------------------------------------------- */
size_t myString::capacity() const
{
    return bfrsz;
}

/* -----------------------------------------------------------------------------
 FUNCTION:          void clear()
 DESCRIPTION:       clears contents of data
 RETURNS:           void
 NOTES:
 ----------------------------------------------------------------------------- */
void myString::clear()
{
    memset(data, 0, strlen(data));
}

/* -----------------------------------------------------------------------------
 FUNCTION:          int compare(const char* s) const;
 DESCRIPTION:       compairs the cstring given to the data string
 RETURNS:           an int (<0, 0, or >0)
 NOTES:             for given text
 ----------------------------------------------------------------------------- */
int myString::compare(const char *s) const
{
    return strcmp(data, s);
}

/* -----------------------------------------------------------------------------
 FUNCTION:          int compare(const myString& str) const;
 DESCRIPTION:       compairs the cstring given to the data string
 RETURNS:           an int (<0, 0, or >0)
 NOTES:             for data
 ----------------------------------------------------------------------------- */
int myString::compare(const myString& str) const
{
    return strcmp(data, str.data);
}

















