/*
 * BST.hpp
 *
 *  Created on: Aug 11, 2020
 *      Author: Tyler Werman Emily Oldham
 */

#ifndef BST_HPP_
#define BST_HPP_

#include "TNode.hpp"

class BST {


public:
	TNode *root;
	BST();
	BST(int s);
	bool insert(int s, string story);
	TNode *find(int s);
	void setHeight(TNode *n);
};



#endif /* BST_HPP_ */
