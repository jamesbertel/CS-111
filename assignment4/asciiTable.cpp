/************************
James Bertel
CS111
Assignment 4 - asciiTable.cpp
10-13-17

This program will use a "for" loop to display the characters for the ASCII values 33 through 126.
***********************/
#include <iostream>
using namespace std;

int main()
{
  int count=0; //count used to display 16 characters 

  for(int ascii=33; ascii <= 126; ascii++) //adds each consecutive ascii
    {
      cout << char(ascii) << "  "; //converts ascii into character and adds spaces
      count++; //adds one more to the count

      if(count>=16) //if there is a seventeenth character on the line
	{
	  cout << endl; //ends the line
	  count = 0; //resets the count
	}
    }
  
  cout << endl; //ends the last line

  return 0;
}
