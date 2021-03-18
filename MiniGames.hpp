/*
 * MiniGames.hpp
 *
 *  Created on: Aug 11, 2020
 *      Author: Tyler Werman Emily Oldham
 */

#ifndef MINIGAMES_HPP_
#define MINIGAMES_HPP_

#include <iostream>

class MiniGames {


public:
	int* code;
	int* userAnswer;
	int size;
  	MiniGames();
  	void findRandomDigits(int* array, int &size);
  	bool playGame(int counter, int &size);
};



#endif /* MINIGAMES_HPP_ */
