/************************
James Bertel
CS111
Assignment 4 - sqrt-step1.cpp
10-13-17

Write a program using a for loop to figure out the top and bottom numbers for the square root of a positive integer number.
***********************/
#include <iostream>
using namespace std;

int main()
{
  int num; //number entered by user
  int top; //top number
  int bottom; //bottom number

  //input
  cout << "Enter Num: "; 
  cin >> num;

  //process
  for(int b = 0; b * b < num; b++) //finds bottom number
    {
      bottom = b; //bottom number
      top = bottom + 1; //top number
    }

  //outputs
  cout << "Top is " << top << endl;
  cout << "Bottom is " << bottom << endl << endl;

  return 0;
}
