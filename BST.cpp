/*
 * BST.cpp
 *
 *  Created on: Aug 11, 2020
 *      Author: Tyler Werman Emily Oldham
 */

#include "BST.hpp"
#include <iostream>
using namespace std;


BST::BST() {
	root = NULL;
}
BST::BST(int s) {
	root = new TNode(s);
}

bool BST :: insert(int s, string story){

	if (root == NULL){
		TNode* node = new TNode(s);
		node->story = story;
		root = node;
		setHeight(root);
		return true;
	}else{
		TNode* tmp = root;
		//the while loop should exit out of itself on its own since there are several returns, but if the tmp
		//has the same data as another node then it will exit the loop and return false.
		while (tmp != NULL){
			if (s < tmp->data){
				if (tmp ->left != NULL){
				tmp = tmp->left;}
				else {
					 TNode* newNode = new TNode(s);
					 newNode->story = story;
					 tmp -> left = newNode;
					 newNode -> parent = tmp;
					 setHeight (newNode);
					 return true;
				}
			}else if (s > tmp->data){
				if (tmp-> right != NULL){
				tmp = tmp -> right;}
				else {
					TNode *newNode = new TNode(s);
					newNode->story = story;
					tmp -> right = newNode;
					newNode -> parent = tmp;
					setHeight (newNode);
					return true;
				}
			}else {
				tmp = NULL;
			}
		}
	}
	return false;
}


TNode* BST :: find(int s){
	if (root == NULL){
		return NULL;
	}else{
		TNode *tmp = root;
		//There is no way for this while loop to exit unless it follows on of the if statement conditions.
		//So, this could be an infinite loop but the data has to either = be < or be > than the input.
		while (tmp != NULL ){
			if (s == tmp -> data){
				return tmp;
			}
			else if (s < tmp -> data){
				if (tmp -> left != NULL){
					tmp = tmp -> left;
				}else{
					return NULL;
				}
			}else if (s > tmp-> data){
				if (tmp -> right != NULL){
					tmp = tmp -> right;
				}else {
					return NULL;
				}
			}

	}
	}
	return NULL;
}


void BST :: setHeight(TNode *n){
	TNode *tmp = n -> parent;
	n -> height = 1;
	while (tmp != NULL){
		TNode *left = tmp -> left;
		TNode *right = tmp -> right;
		if (left == NULL){
			tmp-> height = right -> height +1;
		}else if (right == NULL){
			tmp-> height = left -> height +1;
		}else if (left -> height < right -> height){
			tmp-> height = right -> height +1;
		}else if (left -> height >  right -> height){
			tmp-> height = left -> height +1;
		}
		tmp = tmp -> parent;
	}
}



