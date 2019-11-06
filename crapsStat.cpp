/****************************************
James Bertel
CS111
Lab 5-1
10-18-17

This program will calculate the probabilities of willing and losing in the craps game.
****************************************/
#include <iostream>
#include <cstdlib>
using namespace std;

int rollDice();
bool playGame();

int main()
{
  srand(time(0));

  int games; 

  cout << "How many games do you want to play?: ";
  cin >> games;

  ??? =  playGame();

????????????????????????????
  return 0;
}
/*****************
This function plays one craps game.
It should return true if win or return false if lose
************/
bool playGame()
{
  int roll = rollDice(); 

  int firstRoll = rollDice();
  cout << firstRoll << endl;

  if(firstRoll==7||firstRoll==11)
    game = true;
  else if(firstRoll==2||firstRoll==3||firstRoll==12)
    game = false;
  else //firstRoll==1, 3-6, 8-10)
    {
      do
	{
	  roll = rollDice();
	  cout << roll << endl;
	}while(roll!=firstRoll&&roll!=7);
      
	  if(roll==firstRoll)
	    game = true;
	  if(roll==7)
	    game = false;
       
    }
  return game;
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
