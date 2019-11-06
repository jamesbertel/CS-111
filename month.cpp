/*****************************************************
James Bertel
CS111
Lab 3-2


This program will ask for a month (in number format) and tell the season.
*****************************************************/
#include <iostream>
using namespace std;

int main()
{

  //declare variables
  int month;

  //inputs
  cout << "Enter a month (1-12): ";
  cin >> month;

  //outputs
  switch(month)
    {
    case 12:
    case 1:
    case 2: cout << "winter" << endl;
              break;
    case 3:
    case 4:
    case 5: cout << "spring" << endl;
              break;
    case 6:
    case 7:
    case 8: cout << "summer" << endl;
              break;
    case 9:
    case 10:
    case 11: cout << "fall" << endl;
               break;
    default: cout << "Invalid month" << endl;
    }

  return 0;
}
