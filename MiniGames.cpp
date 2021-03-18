/*
 * MiniGames.cpp
 *
 *  Created on: Aug 11, 2020
 *      Author: Tyler Werman Emily Oldham
 */

#include "MiniGames.hpp"
#include <stdio.h>
#include <stdlib.h>
using namespace std;


MiniGames::MiniGames(){
	code = new int[5];
	userAnswer = new int[5];
	size = 5;
	for (int i = 0; i < 5; i++){
		code[i] = -1;
		userAnswer[i] = -1;
	}
}

void MiniGames::findRandomDigits(int* array, int &size){
	for (int i =0; i<size; i++){
		array[i] = rand()%10;
	}
}

bool MiniGames::playGame(int counter, int &size){
	int numCorrect = 0;
	for (int i=0; i<size; i++){
		cout << "Please enter your " << i << " digit" << endl;
		cin >> userAnswer[i];
	}
	for (int i = 0; i<size; i++){
		if (userAnswer[i] == code[i]){
			cout << "Your " << i << " guess is correct" << endl;
			numCorrect++;
		}
		else{
			cout << "Your " << i << " guess is incorrect" << endl;
		}
	}
	if (numCorrect == size){
		return true;
	}
	else if(counter == 7){
		return false;
	}
	else{
		counter++;
		playGame(counter,size);
	}
}



