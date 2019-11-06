/*****************************************************
James Bertel
CS111
Lab 4-1
9-29-2017

This program will ask the user for a positive ingefer. The program will then use a for loop to get the sum of all the integers from 1 up to the number entered.
*****************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //declare variables
  int num;
  int sum=0;
  int total=0;

  //input
  cout << "Enter a positive number: ";
  cin >> num;

  //process/outputs
  if (num<=0)
    cout << num << " is invalid." << endl;
  else //num is positive
    {
      for(int i=1; i<=num; i++)
	sum = sum+i ;
	cout << "The sum of all numbers from 1 to " << num <<" is " << sum <<endl;
    }
  return 0;
}

