/****************************************
James Bertel
CS111
assignment 5 - crapsStat.cpp
10-27-17

This program will calculate the probabilities of willing and losing in the craps game.
****************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int rollDice();
bool playGame();
void outputProb();

int main()
{
  srand(time(0));

  int count; //number of games played
  double win=0; //number of games won
  double lose=0; //number of games lost
 
  cout << "How many games do you want to play?: ";
  cin >> count;
  
  for(int i = 1; i <= count; i++) //determines how many games were won or lost
    { 
      bool game =  playGame(); //learns whether the game was won or lost
      if(game==true)
	win++; //adds 1 to number of games won
      else //game==false
	lose++; //adds 1 to number of games lost
    }

  win = (win/count)*100; //calculates percent of games that were won
  lose = (lose/count)*100; //calculates percent of games that were lost

  cout << setw(10) << "win %" << setw(10) << "lose %" << endl;
  cout << fixed << setprecision(3) << setw(10) << win << setw(10) << lose << endl;

  return 0;
}
/*****************
This function plays one craps game.
It should return true if win or return false if lose
************/
bool playGame()
{

  int firstRoll = rollDice(); //keeps track of the first roll

  if(firstRoll==7||firstRoll==11) //if the roll was a 7 or 11
    return true;
  else if(firstRoll==2||firstRoll==3||firstRoll==12) //if the roll was a 2, 3, or 12
    return false;
  else //firstRoll==1, 3-6, 8-10)
    {
      int roll = rollDice(); //rolls the dice
      do
	{
	  roll = rollDice(); //rolls the dice again
	}while(roll!=firstRoll && roll!=7); //keeps rolling until a 7 or firstRoll is rolled
      
      if(roll==firstRoll) //game won if the roll equals the first roll
	    return true;
      if(roll==7) //game lost if the roll was a 7
	    return false;
       
    }
}

/******************************************
This function simulates rolling a pair of dice.
It returns a random number between 2 and 12.
******************************************/
int rollDice()
{
  int roll = (rand()%6 + 1)+(rand()%6 + 1);
  return roll;
}
