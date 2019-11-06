/****************************************
James Bertel
CS111
Lab 6-1
10-23-17

This program will...
****************************************/
#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
  const int SIZE = 10;
  int ar[SIZE];

  srand(time(0));

  for(int i = 0; i < SIZE; i++)
      ar[i] = rand()% 100 + 1;

  for(int i = 0; i < SIZE; i++)
    cout << ar[i] << "   ";

  cout << endl;


  for(int l = 0, r = SIZE - 1; l < r; l++, r--)
    {
      int swap = ar[r];
      ar[r] = ar[l];
      ar[l] = swap;
    }

  for(int i = 0; i < SIZE; i++)
    cout << ar[i] << "   ";

  cout << endl;
  
  return 0;
}
