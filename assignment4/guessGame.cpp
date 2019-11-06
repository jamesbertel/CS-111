/************************
James Bertel
CS111
Assignment 4 - guessGame.cpp
10-13-17

This program will generate a random number between 1 and 100 and ask the user to guess what the number is.
***********************/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  //process to find random number
  srand(time(0));
  int num; //random number generated
  int guess; //guess entered by user

  num = rand()% 100 + 1; //num gets some random number between 1 and 100

  //input
  cout << "Guess a number betwee 1 and 100. Enter your guess: ";
  cin >> guess;
  
  //the game (process)
  while(guess != num)
    {
      if(num>guess) //if the number is greater than the guess
	cout << "          Too low, try again." << endl;
     
      else //(num<guess) the number is less than the guess
	cout << "          Too high, try again." << endl;

      cout << "Enter your guess: "; //asks for another guess
      cin >> guess;
    }

  //winning output
    cout << "You guessed it right!" << endl << endl;

  return 0;
}
