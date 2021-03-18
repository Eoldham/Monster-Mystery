/*
 * DLLNode.hpp
 *
 *  Created on: Aug 11, 2020
 *      Author: Tyler Werman Emily Oldham
 */

#ifndef DLLNODE_HPP_
#define DLLNODE_HPP_

#include <iostream>
using namespace std;

class DLLNode {
	friend class DLL;
	string data;
	DLLNode *next;
public:
	DLLNode();
	DLLNode(string s);
};



#endif /* DLLNODE_HPP_ */
