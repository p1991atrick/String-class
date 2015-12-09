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
    myString helloxcode = "Hello Xcode";
    myString helloworld = "Hello World";
    string = "Hello";
    cout << string << endl;
    cout << "Size is: " << string.size() << endl;
    cout << "Length is: " << string.length() << endl;
    string.resize(4);
    cout << string << endl << endl;
    
    //append
    helloworld.append(" from");
    cout << helloworld << endl;//should be "Hello World from"
    
    cout << "Capacity is: " << helloworld.capacity() << endl << endl;
    
    string = "Hello";
    cout << "Comparing string: " << string.compare("Hello") << endl << endl;//should BE 0
    
    string = "Tester";
    cout << "Compair Data: " << helloxcode.compare(string) << endl;//should NOT be 0
    
    myString emptytest;
    cout << "Is string Empty: " << helloworld.empty() << endl; //should be 0
    cout << "Is string Empty: " << emptytest.empty() << endl << endl;  //should be 1
    
//reset all string varables
    helloxcode = "Hello Xcode";
    helloworld = "Hello World";
    string = "Hello";
    
    string = 't';
    cout << "New string is: " << string << endl << endl;
    
    string= "Hello World";
    
    string+= ",";
    cout << "Appended string is: " << string << endl;
    
    string+= " and ";
    cout << "Appended string is: " << string << endl;
    
    string+= helloxcode;
    cout << "Appended string is: " << string << endl << endl;
    
    string.reserve(13);
    cout << "Resized string is: " << string << endl << endl;
    
    string = "test string";
    string.resize(9);
    cout << "Resized string is: " << string << " and it's: " << string.size() << " char's long" << endl;
    
    string.resize(20,'X');
    cout << "Resized string is: " << string << " and it's: " << string.size() << " char's long" << endl << endl;
    
    cout << "Substring at 2 with length of 5 is: " << helloxcode.substr(2,5) << endl << endl;
    
    cout << helloworld << ", and " << helloxcode << " are the original stings.\n";
    helloxcode.swap(helloworld);
    cout << helloworld << ", and " << helloxcode << " are the strings swaped.\n\n";
    
    
    return 0;
}









