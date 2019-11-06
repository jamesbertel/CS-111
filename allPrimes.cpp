/**************************
James Bertel
CS111
Lab 5-1
10/20/17
**************************/
#include <iostream>
#include<iomanip>
#include "myMath.h"
using namespace std;

int main()
{
  int nCount=0;
  int lCount=0;
  bool prime;

  cout << endl;

  for(int i=2; i <= 1000; i++)
    {
      if(isPrime(i)==true)
	{
	  cout << setw(6) << i;
	  nCount++;
	  lCount++;

	  if(lCount%10 == 0)
	    {
	      cout << endl;
	      //lCount=0;
	    }
	}
    }
  
  cout << endl << "\nThere are " << nCount << " prime numbers between 2 and 1000\n";

  return 0;
}
