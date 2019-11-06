/***********************************************
James Bertel
CS111
Assignment - electricBill.cpp

This billing program will calculate an electric bill based on the following rate & comsumption table
*****************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //variables
  int month;
  int current;
  int previous;
  int consume;
  double total;

  //inputs, process, and outputs
  cout << "Enter the month: ";
  cin >> month;
  if (month<1||month>12) //checks if the month is bad
    cout << month << " is an invalid month" << endl << endl;
  else //the month is good
    {
      cout << "Enter the current meter reading: ";
      cin >> current;
      cout << "Enter the previous meter reading: ";
      cin >> previous;
      
      if(current<0||previous<0)
	cout << "The readings are invalid" << endl << endl;
      else //readings are good (positive)
	{
	  consume = current - previous;
	  if(consume<0)
	    cout << "The readings are invalid" << endl << endl;
	  else //comsume>0
	    {
	      if(0<=consume  && consume<=400)
	        total = 8.50;
	      else //over 400 KWH
		{
		  if(5<=month && month<=9)
		    total = 8.50 + .07525*(consume-400);
		  else // all other months that aren't between 5 (May) and 9 (September)
		    total = 8.50 + .06575*(consume-400);
		}

	      cout << fixed << setprecision(2) << endl << "You consumed " << consume << " and your amount due is $" << total << endl << endl;
	    }
	}
    }
  return 0;
}
