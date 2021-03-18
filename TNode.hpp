/*
 * TNode.hpp
 *
 *  Created on: Aug 11, 2020
 *      Author: Tyler Werman Emily Oldham
 */

#ifndef TNODE_HPP_
#define TNODE_HPP_

#include <iostream>
using namespace std;

class TNode{
	friend class BST;

public:
	TNode *left;
	TNode *right;
	TNode *parent;
	int data;
	string story;
	int height;
	TNode(int s);
	TNode();
	~TNode();
	void printNode();
};



#endif /* TNODE_HPP_ */
