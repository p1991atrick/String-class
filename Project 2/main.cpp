//
//  main.cpp
//  Project 2
//
//  Created by Gordon Freeman on 10/13/15.
//  Copyright © 2015 Patrick Kelly. All rights reserved.
//
/* -----------------------------------------------------------------------------
 
 FILE:              myString.h
 
 DESCRIPTION:       Testing file for myString class
 
 COMPILER:          MSVS2013 and GNU g++
 
 NOTES:             None
 
 MODIFICATION HISTORY:
 
 Author                  Date               Version
 ---------------         ----------         --------------
 Patrick Kelly           2015-11-8          1.0
 
 ----------------------------------------------------------------------------- */
#include <iostream>
#include "myString.h"
#include "My_Macros.h"
using namespace std;

int main()
{
    myString string;
    myString hello = "Hello Xcode";
    myString helloworld = "Hello World";
    string = "Hello";
    cout << string << endl;
    cout << "Size is: " << string.size() << endl;
    cout << "Length is: " << string.length() << endl;
    string.resize(4);
    cout << string << endl;
    
    string.append("o World");
    cout << string << endl;
    cout << "Capacity is: " << string.capacity() << endl;
    cout << "Comparing string: " << string.compare("Hello") << endl;
    cout << "Compair Data: " << string.compare(string) << endl;
    cout << "Is string Empty: " << string.empty() << endl;
    string= 't';
    cout << "New string is: " << string << endl;
    string= "Hello World";
    cout << "New string is: " << string << endl;
    string= hello;
    cout << "New string is: " << string << endl;
    //string+= '/';
    //cout << "Appended string is: " << string << endl;
    string+= " and ";
    cout << "Appended string is: " << string << endl;
    string+= helloworld;
    cout << "Appended string is: " << string << endl;
    string.reserve(13);
    cout << "Resized string is: " << string << endl;
    string.resize(15);
    cout << "Resized string is: " << string << " and it's: " << string.size() << " char's long" << endl;
    string.resize(20,'X');
    cout << "Resized string is: " << string << " and it's: " << string.size() << " char's long" << endl;
    
    return 0;
}
