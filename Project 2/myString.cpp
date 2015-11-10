//
//  myString.cpp
//  Project 2
//
//  Created by Gordon Freeman on 10/13/15.
//  Copyright © 2015 Patrick Kelly. All rights reserved.
//

#include "myString.h"
#include <iostream>
#include "My_Macros.h"
#include <cstring>

using namespace std;

myString::myString()
{
    //default data null
    data = new char[1];
    data[0]=0;
    //buffer to 0
    bfrsz = 1;
}


myString::myString(const char* s)
{
    bfrsz = (int)std::strlen(s);
    data = new char[bfrsz + 1];
    data[bfrsz] = 0;
    
    strncpy(data, s, bfrsz);
}
