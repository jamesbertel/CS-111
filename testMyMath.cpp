/**************************
James Bertel
CS111
Lab 5-1
10/9/17
**************************/
#include <iostream>
#include "myMath.h"
using namespace std;

int main()
{
  /*  
  int a = pow(2,8);
 
  cout << a << endl;
  cout << pow(4,2) << endl;
  */
  /*
  int base, exp;
  cout << "Enter the base: ";
  cin >> base;
  cout << "Enter the exponentL ";
  cin >> exp;
  cout << pow(base, exp) << endl;
  
  cout << "-1.5" << endl;
  cout << round(-1.5) << endl;
  
  int num = 24;
  bool prime = isPrime(num);
  
  if(prime==true)
    cout << "prime\n";
  else
    cout << "not prime\n";
  */
  int num;
  cout << "Enter num: ";
  cin >> num;

  cout << sqrt(num) << endl;

  return 0;
}
