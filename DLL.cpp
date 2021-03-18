/*
 * DLL.cpp
 *
 *  Created on: Aug 11, 2020
 *      Author: Tyler Werman Emily Oldham
 */
#include "DLLNode.hpp"
#include "DLL.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

DLL::DLL(){  // constructor - initializes an empty list
	last = NULL;
	first = NULL;
	size = 0;
}
DLL::DLL(string s){  // constructor, initializes a list with one new node with data x
	DLLNode *n = new DLLNode (s);
	first = n;
	last = n;
	size=1;
}

 void DLL :: addFirst(string s){
	// add the very first node to the list
	DLLNode *n = new DLLNode(s);
	first = n;
	last = n;
	size = 1;
}

 void DLL :: push(string s){
	// does what you'd think
	DLLNode *n = new DLLNode (s);
	if (first  ==  NULL){
		addFirst(s);
	}else{
		DLLNode *temp = last;
		last->next = n;
		last = n;
		size++;
	}
}

void DLL::printList() {
	DLLNode *tmp = first;
	while (tmp != NULL) {
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	cout << endl;
}

DLL::~DLL(){
	DLLNode *tmp = first;
	DLLNode *tmp2 = first->next;
	while (tmp2 != NULL) {
		delete tmp;
		tmp = tmp2;
		tmp2 = tmp2->next;
	}
}







