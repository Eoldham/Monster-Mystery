/*
 * TNode.cpp
 *
 *  Created on: Aug 11, 2020
 *      Author: Tyler Werman Emily Oldham
 */

#include <iostream>
#include <string>
#include "TNode.hpp"
using namespace std;

TNode::TNode(int s) {
	left = NULL;
	right = NULL;
	parent = NULL;
	height = 1;
	story = " ";
	data = s;
}

void TNode::printNode() {
	cout << story << endl;
}



