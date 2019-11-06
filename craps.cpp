/****************************************
James Bertel
CS111
Lab 5-1
10-18-17

This program will stimulate a game of craps.
****************************************/
#include <iostream>
#include <cstdlib>
using namespace std;

int rollDice();

int main()
{
  srand(time(0));

  int roll;

  int firstRoll = rollDice(); 
  cout << firstRoll << endl;

  if(firstRoll==7||firstRoll==11)
    cout << "==== WIN ====" << endl;
  else if(firstRoll==2||firstRoll==3||firstRoll==12)
    cout << "==== LOSE ====" << endl;
  else //firstRoll==1, 3-6, 8-10)
    {
      do
	{
	  roll = rollDice();
	  cout << roll << endl;
	}while(roll!=firstRoll&&roll!=7);
      
	  if(roll==firstRoll)
	    cout << "==== WIN ====" << endl;
	  if(roll==7)
	    cout << "==== LOSE ====" << endl;
       
    }
  return 0;
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
