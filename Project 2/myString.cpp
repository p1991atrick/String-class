//
//  myString.cpp
//  Project 2
//
//  Created by Gordon Freeman on 10/13/15.
//  Copyright © 2015 Patrick Kelly. All rights reserved.
//

#include "myString.hpp"
#include <iostream>
#include "My_Macros.h"

using namespace std;


myString::myString(const char* s)
{
    bfrsz = (strlen(s));
    bfrsz += 1;
    data = new char;
    
}
