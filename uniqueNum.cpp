/****************************************
James Bertel
CS111
Lab 11-2
11-8-17

This program will find the length of a sequence of numbers.
****************************************/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  const int SIZE = 100;
  int a[SIZE];
  int count = 0;
  int i = 0;
  int num;

  cout << "\nEnter a number: ";
  cin >> num;

  //fill the array with positive-numbers only
  //leave while-loop when a positive number is entered
  while(num >= 0 && i < SIZE)
    {
      count++;
      a[i++] = num;
      cout << "Enter a number: ";
      cin >> num;
    }
  
  i = count; //puts count into i

  //go through each index and uncount duplicates
  for(int q = 0; q < i/2; q++)
    {
      for(int w = 0; w < i; w++)
	{
	  if(a[q]==a[w] && q!=w)
	    count--;
	}
    }
      
  cout << "\nThere are " << count << " unique numbers\n" << endl;	    
  
   return 0;
}
