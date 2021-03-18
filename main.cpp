
/*
 * main.cpp
 *
 *  Created on: Aug 11, 2020
 *      Author: Tyler Werman Emily Oldham
 */
#include "SortingGame.hpp"
#include "BST.hpp"
#include "DLL.hpp"
#include "MiniGames.hpp"
#include "SortingGame.hpp"
#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(0));
	DLL *storyLine = new DLL();
	BST *storyTree = new BST();
	storyTree -> insert (4,"Your dad has been a long time monster hunter, you didn't pick up the family business and instead you went to college to get a degree.\n You are about to hear your name called and walk across the stage for your diploma when you get a phone call from your mom.\n Do you pick up or press ignore? ");
	storyTree -> insert (6, "You don't answer and you walk across the stage as your name is called and when you look out to see your parents you see that they are not there.\n That is when you finally pick up the phone and hear your mom tell you that your dad has gone missing.\n You have never heard your mom so frantic so you head home and pack a bag\n so you can grab the first flight home.\n Arriving home is like a flash back, you have not been back in four years and absolutely nothing has changed.\n You stand at your front door and decide if its okay to walk in or knock.\n You decide to walk in.\n Do you go to your dad's office or go comfort your mom first? " );
	storyTree -> insert (2,"You answer and hear your frantic mom tell you that your dad has gone missing.\n You have never heard your mom so frantic so you get your diploma, head home and pack a bag so you can grab the first flight.\n Arriving home is like a flash back, you have not been back in four years and absolutely nothing has changed.\n You stand at your front door and decide if its okay to walk in or knock.\n You decide to walk in.\n Do you go to your dad's office or go comfort your mom first?  ");

	BST *momClues = new BST();
	momClues -> insert (8, "You go to the living room where your mom paces beside the couch.\n You sit down with your mom as she explains that your dad had never come home.\n Do you ask her when he was last seen or what was he working on last?");
	momClues -> insert (4, " Your mom tells you that He had left that morning \n telling her that he had a few things to take care of before he was leaving for Paris.\n Do you ask her about what he was working on last?");
	momClues -> insert (12, "Your mom thinks for a few minutes fiddiling with a key in her hands,\n she tells you that she doesn't know exactly what he was working on only that he kept saying the name: Balthazar.\n Do you ask when your dad was seen last?");
	momClues -> insert (2,  "Your mom thinks for a few minutes fiddiling with a key in her hands,\n she tells you that she doesn't know exactly what he was working on only that he kept saying the name: Balthazar.\nYour mother then breathes deeply before she apologizes for bringing you into this mess.\n She needs you to help her find your father, she knows something is wrong.\n She holds out her hand with the key in it and tells you that your dad always told her to give this to you if something went wrong.\n You thank her.");
	momClues -> insert (6, "Your mother breathes deeply before she apologizes for bringing you into this mess.\n She needs you to help her find your father, she knows something is wrong.\n She holds out her hand with the key in it and tells you that your dad always told her to give this to you if something went wrong.\n You thank her.\n She then tells you that she doesn't know exactly what he was working on only that he kept saying the name: Balthazar");
	momClues -> insert (10, " Your mom tells you that He had left that morning telling your mom that he had a few things to take care of before he was leaving for Paris.\n Your mother breathes deeply before she apologizes for bringing you into this mess.\n She needs you to help her find your father, she knows something is wrong.\n She holds out her hand with the key in it and tells you that your dad always told her to give this to you if something went wrong.\n You thank her." );
	momClues -> insert (14, " Your mother breathes deeply before she apologizes for bringing you into this mess.\n She needs you to help her find your father, she knows something is wrong.\n She holds out her hand with the key in it and tells you that your dad always told her to give this to you if something went wrong. You thank her.\n Your mom then tells you that He had left that morning telling your mom that he had a few things to take care of before he was leaving for Paris." );



	BST *dadClues = new BST();
	dadClues -> insert (8, "You head down the hall on your left until you reach the only closed door in the hall.\n You turn the handle and enter your dad's office.\n Inside your dads office you look around,\n his looming wooden desk is in the middle of the room with a small table and chair set in the left side corner, it looks like a chessboard is on it.\n Do you look at your dads chess board or the file on his desk?");
	dadClues -> insert (4, "You look towards the chessboard in the corner of the room.\n It is unsolved.\n You walk over thinking about the pieces on the board for a few minutes.\n Finally it comes to you and you move a piece.\n A small door on the chess board unclicks and inside is a small vile of liquid without a label.\n You pick up the vile and pocket it in case you need it in the future.\n Now, do you go look at the file on your dads desk? ");
	dadClues -> insert (12, "You walk towards his desk, it is extremely tidy with only one file on the center of the desk beside his computer.\n It is a small paper file and as you read through it you see highlighted in yellow  48.8337, 2.3261.\n Now do you look at your dad's computer?");
	dadClues -> insert (2, " You walk towards his desk, it is extremely tidy with only one file on the center of the desk beside his computer.\n It is a small paper file and as you read through it you see highlighted in yellow  48.8337, 2.3261.\n You log into his computer using your birthday and your moms .\n On the computer you decide to look at his last opened file.In this file you read about a warlock who is trying to build a demon army:\n your dad notes that this warlock is extremely sophisticated and dangerous."  );
	dadClues -> insert (6, " You log into his computer using your birthday and your moms .\n On the computer you decide to look at his last opened file.\n In this file you read about a warlock who is trying to build a demon army:\n your dad notes that this warlock is extremely sophisticated and dangerous.\n You then look at your dads desk  it is extremely tidy with only one file on the center of the desk beside his computer.\n It is a small paper file and as you read through it you see highlighted in yellow 48.8337, 2.3261.  " );
	dadClues -> insert (10, "You log into his computer using your birthday and your moms .\n On the computer you decide to look at his last opened file.\nIn this file you read about a warlock who is trying to build a demon army:\n your dad notes that this warlock is extremely sophisticated and dangerous.\n Finally done at his desk You look towards the chessboard in the corner of the room.\n It is unsolved.\n You walk over thinking about the pieces on the board for a few minutes.\n Finally it comes to you and you move a piece. \n A small door on the chess board unclicks and inside is a small vile of liquid without a label.\n You pick up the vile and pocket it in case you need it in the future. ");
	dadClues -> insert (14, "You look towards the chessboard in the corner of the room.\n It is unsolved.\n You walk over thinking about the pieces on the board for a few minutes.\n Finally it comes to you and you move a piece.\n A small door on the chess board unclicks and inside is a small vile of liquid without a label.\n You pick up the vile and pocket it in case you need it in the future.\n Then you head back to your dad's desk to look at his computer.\n  You log into his computer using your birthday and your moms which has always been his password.\n On the computer you decide to look at his last opened file.In this file you read about what the Name your mom gave you,\n it is a warlock who is trying to build a demon army: your dad notes that this warlock is extremely sophisticated and dangerous. " );

	BST *friendClues = new BST();
	friendClues -> insert (2,"You leave your parents house, deciding to talk to one of your dad's closest friends as well as his partner.\n Reaching George's workshop you see him out front and decide to ask him about your dad.\n He says he is extremely worried.\n While talking to your dads partner he hands you two things one is a small journal:\n This journal is cyphered and the partner says your dad would never share the cypher with him.\n He then tells you that your dad had a storage locker where you may be able to find out more information. " );


	BST *storageClues = new BST();
	storageClues -> insert (16,"You arrive at the storage locker that George told you about.\n You ask the manager for the keys and show him your ID, he lets you in.\n As he walks away you enter the locker and look around.\n You first see a chest on the table.\n Do you go to the chest or try to decypher the journal?");
	storageClues -> insert (8, "You walk towards the locked chest that is placed in the middle of the workspace.\n Looking at the lock you realize it looks like the key your mom gave you.\n You take out the key and luckily it fits in the hole.\n In the chest are several vials of herbs and liquids that look similar to the one you found previously.\n The only difference is that these are labeled.\n You close the chest and lock it then slide the key back into your pocket.\n Next you notice large dresser, do you try to translate the journal or go to the large dresser?");
	storageClues -> insert (24,"Looking at the journal you notice a pattern to it.\n You feverishly begin writing trying to figure out what is on the pages.\n A few hours later, the sun has set and you are finally done.\n Reading through the pages of writing you just translated you realize it is some sort of demon codex.\n There are names and drawn images on one page followed by a description of the monster or demon or even some necromancers.\n This codex will be extremely helpful in the future.\n You look up and notice a large dresser, do you go the the locked chest or the large dresser?");
	storageClues -> insert (4,"Looking at the journal you notice a pattern to it.\n You feverishly begin writing trying to figure out what is on the pages.\n A few hours later, the sun has set and you are finally done.\n Reading through the pages of writing you just translated you realize it is some sort of demon codex.\n There are names and drawn images on one page followed by a description of the monster or demon or even some necromancers.\n This codex will be extremely helpful in the future.\n Now you notice a clothing rack.\n Do you go look at the dresser or the clothing rack?");
	storageClues -> insert (12,"Towards the back of the locker you see a large wooden dresser.\n You walk over and open it.\n The inside is full of different weapons along the bottom there are shorter knives while on the sides there are hanging swords.\n The back has several very large blunt force weapons that you would use to bludgeon a monster.\n Now you see the clothing rack, do you try and read the journal or go to the clothing rack?");
	storageClues -> insert (20,"You walk towards the locked chest that is placed in the middle of the workspace.\n Looking at the lock you realize it looks like the key your mom gave you.\n You take out the key and luckily it fits in the hole.\n In the chest are several vials of herbs and liquids that look similar to the one you found previously.\n The only difference is that these are labeled.\n You close the chest and lock it then slide the key back into your pocket.\n You notice the clothing rack, do you go to the dresser or the clothing rack?");
	storageClues -> insert (28,"Towards the back of the locker you see a large wooden dresser.\n You walk over and open it.\n The inside is full of different weapons along the bottom there are shorter knives while on the sides there are hanging swords.\n The back has several very large blunt force weapons that you would use to bludgeon a monster.\n You notice the clothing rack, do you go the the chest or the clothing rack?");

	storageClues -> insert (2,"Towards the back of the locker you see a large wooden dresser.\n You walk over and open it.\n The inside is full of different weapons along the bottom there are shorter knives while on the sides there are hanging swords.\n The back has several very large blunt force weapons that you would use to bludgeon a monster.\n Next to the wooden dresser is a metal rack with different outfits hung.\n There are a few cloaks as well as outfits for different temperatures.\n It would be a good idea to change into one of the pieces with armor. "  );

	storageClues -> insert (6,"Next to the wooden dresser is a metal rack with different outfits hung.\n There are a few cloaks as well as outfits for different temperatures.\n It would be a good idea to change into one of the pieces with armor.\n You then go to the wooden dresser.\n The inside is full of different weapons along the bottom there are shorter knives while on the sides there are hanging swords.\n The back has several very large blunt force weapons that you would use to bludgeon a monster. ");

	storageClues -> insert (10, "Looking at the journal you notice a pattern to it.\n You feverishly begin writing trying to figure out what is on the pages.\n A few hours later, the sun has set and you are finally done.\n Reading through the pages of writing you just translated you realize it is some sort of demon codex.\n There are names and drawn images on one page followed by a description of the monster or demon or even some necromancers.\n This codex will be extremely helpful in the future.\n Next to the wooden dresser is a metal rack with different outfits hung.\n There are a few cloaks as well as outfits for different temperatures.\n It would be a good idea to change into one of the pieces with armor." );

	storageClues -> insert (14,"Next to the wooden dresser is a metal rack with different outfits hung.\n There are a few cloaks as well as outfits for different temperatures.\n It would be a good idea to change into one of the pieces with armor.\n You then decide to read the journal.\n Looking at the journal you notice a pattern to it.\n You feverishly begin writing trying to figure out what is on the pages.\n A few hours later, the sun has set and you are finally done.\n Reading through the pages of writing you just translated you realize it is some sort of demon codex.\n There are names and drawn images on one page followed by a description of the monster or demon or even some necromancers.\n This codex will be extremely helpful in the future. " );

	storageClues -> insert (18,"Towards the back of the locker you see a large wooden dresser.\n You walk over and open it.\n The inside is full of different weapons along the bottom there are shorter knives while on the sides there are hanging swords.\n The back has several very large blunt force weapons that you would use to bludgeon a monster.\n Next to the wooden dresser is a metal rack with different outfits hung.\n There are a few cloaks as well as outfits for different temperatures.\n It would be a good idea to change into one of the pieces with armor. ");

	storageClues -> insert (22, "You head towards the metal rack with different outfits hung on it.\n There are a few cloaks as well as outfits for different temperatures.\n It would be a good idea to change into one of the pieces with armor.\n Towards the back of the locker you see a large wooden dresser.\n You walk over and open it.\n The inside is full of different weapons along the bottom there are shorter knives while on the sides there are hanging swords.\n The back has several very large blunt force weapons that you would use to bludgeon a monster."  );

	storageClues -> insert (26,"You walk towards the locked chest that is placed in the middle of the workspace.\n Looking at the lock you realize it looks like the key your mom gave you.\n You take out the key and luckily it fits in the hole.\n In the chest are several vials of herbs and liquids that look similar to the one you found previously.\n The only difference is that these are labeled.\n You close the chest and lock it then slide the key back into your pocket.\n Then next to the wooden dresser is a metal rack with different outfits hung.\n There are a few cloaks as well as outfits for different temperatures.\n It would be a good idea to change into one of the pieces with armor. ");

	storageClues -> insert (30,"Next to the wooden dresser is a metal rack with different outfits hung.\n There are a few cloaks as well as outfits for different temperatures.\n It would be a good idea to change into one of the pieces with armor.\n You then walk towards the locked chest that is placed in the middle of the workspace.\n Looking at the lock you realize it looks like the key your mom gave you.\n You take out the key and luckily it fits in the hole.\n In the chest are several vials of herbs and liquids that look similar to the one you found previously.\n The only difference is that these are labeled.\n You close the chest and lock it then slide the key back into your pocket. " );


	bool over = false;
	TNode* current = storyTree -> root;
	BST *Tree = storyTree;
	bool beenDadClues = false;
	bool beenMomClues = false;

	cout << "The find. Written by Emily Oldham and Tyler Werman " << endl;
	cout << "Please enter 1 for yes or to choose the first option and enter 2 for no or to choose the second option" << endl;
	cout << "Press 0 if there is no question." << endl;
	cout << "To read the whole story press 9." <<endl;
	//Game loop
	while (!over){

		int input;
		cout << " " << endl;
		current->printNode();
		cout << " " << endl;
		storyLine->push(current->story);

		//ACCPET USER INPUT and name it input
		cin >> input;

		if (input == 1){
			if (current -> left == NULL){
				if (Tree == storyTree){
					current = dadClues -> root;
					Tree = dadClues;
					beenDadClues = true;
				}
			}
			else{
				current = current -> left;
			}

		}
		else if (input == 2){
			if (current -> right == NULL){
				if (Tree == storyTree){
					current = momClues -> root;
					Tree = momClues;
					beenMomClues = true;
				}
				cout << "You will now play the game 'Can you sort?' before continuing." << endl;
				SortingGame *sort = new SortingGame();
				sort->findRandomDigits(sort->array, sort->size);
				bool win = sort->playGame(sort->array, sort->size);
				if (win == false){
					over = true;
				}
			}
			else{
				current = current -> right;
			}
		}
		else if (input == 9){
			storyLine->printList();
			cout << " " << endl;
		}
		else{
			if (Tree == dadClues){
				if (beenMomClues == true){
					current = friendClues -> root;
					Tree = friendClues;
				}
				else{
					current = momClues -> root;
					Tree = momClues;
					cout << "You will now play the game 'Can you sort?' before continuing." << endl;
					SortingGame *sort = new SortingGame();
					sort->findRandomDigits(sort->array, sort->size);
					bool win = sort->playGame(sort->array, sort->size);
					if (win == false){
						over = true;
					}
				}
			}
			else if (Tree == momClues){
				if (beenDadClues == true){
					current = friendClues -> root;
					Tree = friendClues;
				}
				else{
					current = dadClues -> root;
					Tree = dadClues;
				}
			}
			else if (Tree == friendClues){
				cout << "You will now play the game mastermind before continuing." << endl;
				MiniGames *masterMind = new MiniGames();
				masterMind->findRandomDigits(masterMind->code, masterMind->size);
				if (masterMind->playGame(0,masterMind->size) == false){
					cout << "Game Over, please try again" << endl;
					break;
				}
				current = storageClues -> root;
				Tree = storageClues;
			}
			else if (Tree == storageClues){
				over = true;
				cout << "Congratulations, you have finished the first part of the game!";
			}
			else{
				cout << "Please try again" << endl;
			}
		}
	}
}
