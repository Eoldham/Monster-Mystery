
/*
 * SortingGame.cpp
 *
 *
 *      Author: Emily Oldham, Tyler Werman
 */

#include "SortingGame.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


SortingGame::SortingGame(){
	array = new int[5];
	userAnswer = 0;
	size = 5;
	for (int i = 0; i < 5; i++){
		array[i] = -1;
	}
}

void SortingGame::findRandomDigits(int* array, int size){
	int enter;
	for (int i =0; i<size; i++){
		bool work = false;
		while(!work){
			int l = rand()%100;
			for (int k = 0; k<size; k++){
				if (l == array[k]){
					work = false;
				}else{
					work = true;
					enter = l;
				}
			}
		}
		array[i] = enter;
	}
}

bool SortingGame::playGame(int* array, int size){
	int minIndex;
	int numberOfSwaps = 0;



	//Print the array
	for (int i = 0; i< size; i++){
		cout << array[i] << endl;
	}

	//This is where the selection sort is done.
		for (int i = 0; i < size - 1; i++){
			minIndex = i;
			for (int j = i+1; j < size; j++){
				if (array[j] < array[minIndex]){
					minIndex = j;
				}
			}
			if (minIndex != i){
				int temp = array[minIndex];
				array[minIndex] = array[i];
				array[i] = temp;
				numberOfSwaps++;
			}
		}

	cout << "The list of numbers above needs to be sorted." << endl;
	cout << "using selection sort, how many times would you have to swap numbers?"<<endl;
	cout << "If the list is already sorted enter 0" << endl;

	cin >> userAnswer;

	if (userAnswer == numberOfSwaps){
		cout << "Good job!" << endl;
		return true;
	}else{
		cout << "I'm sorry Game Over" << endl;
		return false;
	}

}






