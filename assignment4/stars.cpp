/************************
James Bertel
CS111
Assignment 4 - stars.cpp
10-13-17

The user will enter a number (>=1) into 'n'. The program will then show 1 star on the first line, 2 stars on the second line, n stars on the nth line, and so on.
***********************/
#include <iostream>
using namespace std;

int main()
{
  int num; //number entered by user

  cout << "Enter a number: ";
  cin >> num;

  for(int row= 1; row<=num; row++) //makes each row
    {
      for(int i=1; i<=(num-row); i++) //makes spaces preceding stars
	cout<< " "; //prints a space

      for(int col=1; col<=row; col++) //makes each column
	cout << "*"; //prints a star

      cout << endl;
    }

  for(int row=num-1;row>0; row--)
    {
      for(int i=(num-row); i>0; i--) //makes spaces preceding stars
	cout<< " "; //prints a space

      for(int col=row; col>0; col--) //makes each column
	cout << "*"; //prints a star

      cout << endl;
    }

  return 0;
}
