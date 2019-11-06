/************************
James Bertel
CS111
Assignment 5 - squareRoot.cpp
10-27-17

This program will find the square root of a number.
***********************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int num; //number entered by user
  int start; //starting number
  double root; //actual square root
  double square; //square of the square
  int bottom, top; //finds perfect squares around 'num'

  cout << "Enter an integer number that you want to find the square root for: "; 
  cin >> num;

  //ensures that num will only be a positive integer greater than zero
  while(num <= 0)
    {
      cout << "This program finds the square root of a number greater than 0 only. Enter a positive integer number: ";
      cin >> num;
    }

  //finds bottom and top perfect squares 'num' lies between
  for(int b = 0; b * i < num; b++) 
    {    
      bottom = b;
      top = b + 1;
    }

  if(top*top == num) //if the square root of num is a perfect square
    {
      cout << top << " is the square root of " << num << endl << endl;
    }
  else //if the square root of num is NOT a perfect square
    {
      if(num-bottom*bottom <= top*top-num) //if the square of the bottom number is closer to 'num' than the square of the top
	start = bottom;
      else //if the square of the top number is closer to 'num' than the square of the bottom
	start = top;

      for(double var, L=start, r=1; r <= 10; r++) //finds the square root
	{ 
	  var = (num/L);
	  root = (var+L) / 2;
	  L = root;
	}  

      square = root*root; //finds the square of the root (square should equal to num)
     
      cout << "Start at " << start << endl;
      cout << "The square root of " << num << " is " << setprecision(6) << root << endl;
      cout << "The square of the square root is " << square << endl << endl;
    }

  return 0;
}
