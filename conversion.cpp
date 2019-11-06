/**********************
James Bertel
CS 111
Lab 2-2
9-13-17

This program will convert a length in centimeters to yards, feet, and inches.
*******************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  //declare all variables
  double cm; //length in centimeters
  double yd; //length in yards
  double ft; //length in feet
  double in; //length in inches
  const double CONV_CM_IN = 2.54; //conversion of cm to inches
  int iIn; //inches rounded to the nearest integer
  int modInch; //inches used for conversion

  //get length in cm
  cout << "Please enter a length in centimeters: ";
  cin >> cm;

  //convert cm to inches
  in = cm / CONV_CM_IN ; //converting cm to inches
  iIn = (int)(in + 0.5); //inches is rounded to nearest integer
  yd = iIn / 36; //convertiong inches to yards
  modInch = iIn; //put rounded inches into conversion-ready variable
  modInch = modInch % 36; //finding remainder inches after yards
  ft = modInch / 12; //converting inches to feet
  modInch = modInch % 12; //finding remainding inches after feet

  //outputs!
  cout << cm << " cm is about " << in << " inches rounded to " << iIn << " inches." << endl;
  cout << iIn << " inches = " << yd << " yards, " << ft << " feet, and " << modInch  << " inches." << endl;
  cout << "Thank you for using the program. Good bye!" << endl;

  return 0;
}
