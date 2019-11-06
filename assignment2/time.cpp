/****************************************
James Bertel
CS111
Assignment 2: time.cpp
9-27-2017

This program will ask the user for an amout of time in seconds, and convert it into hours, minutes, and seconds.
****************************************/
#include <iostream> //for cin, cout
#include <cmath> //for math functions
using namespace std;

int main()
{
  //variables
  int seconds; //amount of seconds
  double hours; //amount of hours 
  double minutes; //amount of minutes
  int iHours; //amount of hours, rounded
  int iMin; //amount of minutes, rounded

  //input
  cout << "Enter the time in seconds: ";
  cin >> seconds; 

  //process
  hours = seconds / 3600; //converting seconds into hours
  iHours = (int)(hours + 0.5); //rounding hours
  seconds = seconds % 3600; //finding remaining seconds after hours
  minutes = seconds / 60; //converting remaining seconds into minutes
  iMin = (int)(minutes + 0.5); //rounding minutes
  seconds = seconds % 60; //finding remaining amount of seconds
  
  //outputs
  cout << iHours << " hours " << iMin << " minutes " << seconds << " seconds" << endl;
  return 0;
}
