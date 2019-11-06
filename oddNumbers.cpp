/*****************************************************
James Bertel
CS111
Lab 4-1


This program will display the double and triple for all odd numbers from 99 down to 1.
*****************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

  cout << setw(10)<< "Number" << setw(10)<<"Double"<<setw(10)<<"Triple"<<endl;
  
  for(int num = 99; num >= 1; num -= 2) 
    cout << setw(10)<< num << setw(10)<< num*2 << setw(10) << num*3 << endl;

  return 0;
}

