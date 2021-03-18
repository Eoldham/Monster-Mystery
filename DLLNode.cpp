/*
 * DLLNode.cpp
 *
 *  Created on: Aug 11, 2020
 *      Author: Tyler Werman Emily Oldham
 */

#include <stdlib.h>
#include <iostream>
#include "DLLNode.hpp"
using namespace std;


DLLNode::DLLNode(string s){
	data = s;
	next = NULL;
}


