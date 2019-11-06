/****************************************
James Bertel
CS111
Assignmnt 2: lowerToUpper.cpp
9-27-2017

This program will ask the user for a lowercase letter.
It will then convert it to the corresponding uppercase letter.
****************************************/
#include <iostream>
using namespace std;

int main()
{
  //variables
  char uppercase;
  char lowercase; 
  int offset; //variable for ASCII conversion

  //input
  cout << "Enter a lowercase letter: ";
  cin >> lowercase;

  //process
  offset = 'A'-'a'; //uses ASCII to convert lowercase letter to uppercase letter
  uppercase = (char)(lowercase + offset); //converts uppercase letter's ASCII code into a character

  //output
  cout << "The uppercase is " << uppercase << "." << endl;

  return 0;
}
