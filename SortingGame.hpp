/*
 * SortingGame.hpp
 *
 *  Created on: Aug 12, 2020
 *      Author: werma
 */

#ifndef SORTINGGAME_HPP_
#define SORTINGGAME_HPP_

class SortingGame {


public:
	int* array;
	int userAnswer;
	int size;
	SortingGame();
  	void findRandomDigits(int* array, int size);
  	bool playGame(int* array, int size);
};



#endif /* SORTINGGAME_HPP_ */
