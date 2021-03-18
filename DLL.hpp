/*
 * DLL.hpp
 *
 *  Created on: Aug 11, 2020
 *      Author: Tyler Werman Emily Oldham
 */

#ifndef DLL_HPP_
#define DLL_HPP_

#include "DLLNode.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

class DLL {

public:
	friend class Player;
	DLLNode *first;
	DLLNode *last;
	int size;
	DLL();  // constructor - initializes an empty list
	DLL(string s);  // constructor, initializes a list with one new node with data x
	void addFirst(string s);
	void push(string s);  // does what you'd think
	void printList();
	~DLL();

};



#endif /* DLL_HPP_ */
