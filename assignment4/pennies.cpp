/************************
James Bertel
CS111
Assignment 4 - pennies.cpp
10-13-17

This program will calculate how much a person would earn over a period of time if their salary is one penny on the first day, and doubles each day afterward.
***********************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //variables
  int days; //total days worked
  double pay=0.01; //first day amount paid
  double total=0.00; //total pay after days worked

  //input(s)
  do
    {
      cout << "Enter the number of days you worked: ";
      cin >> days;
    }while(days<=0); //rejects bad days

  //process
  for(int i=1;i<=days;i++)
    {

      cout << setw(5) << i; //amount of days
      cout << setw(10) << fixed << setprecision(2) << pay ;// pay per day;
      cout << endl;
      
      total+=pay; //adds pay to total
      pay*=2; //doubles the pay
    }

  //output
  cout << endl << "Total" << setw(10) << total << endl << endl;

  return 0;
}
