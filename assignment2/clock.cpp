/****************************************
James Bertel
CS111
Assignment 2: clock.cpp
9-27-2017

This program will ask for a time in 2 integers: hours and minutes. It will tell the angles of the hour and minute hands on the clock.
****************************************/
#include <iostream>
using namespace std;

int main()
{
  //variables
  int hours; //amount of hours entered by user
  int minutes; //amount of minutes entered by user
  double aHour; //angle of hour hand
  int aMin; //angle of minute hand
  int iHour; //hours in integers

   //inputs
  cout << "Enter hours: ";
  cin >> hours;
  cout << "Enter minutes: ";
  cin >> minutes;

  //process
  hours %= 12; //ensures hours are less than 12 (to stay on clock) 
  aMin = 6 * minutes; //angle of minute hand
  aHour = (30*hours) + (0.5*minutes); //exact angle of hour hand
       //aHour = .5 * ( (double)(60 * hours + minutes) );

  //outputs
  cout << "The angle of the hour hand is: " << aHour << endl;
  cout << "The angle of the minute hand is: " << aMin << endl;

  return 0;
}
