/****************************************
James Bertel
CS111
Assignment 2: temperature.cpp
9-27-2017

This program will as for a Celsius temperature, convert it to the Farenheit temperature and round it to the nearest integer.
****************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  //variables
  int celsius;
  double faren; //celsius converted into farenheit
  int iFaren; //farenheit rounded to the nearest integer

  //inputs
  cout << "Enter a temperature in Celsius: ";
  cin >> celsius;

  //process
  faren = 1.8 * celsius + 32; //C to F conversion
  iFaren = (int)(faren+0.5); //farenheit rounded to nearest integer

  //outputs
  cout << celsius << " C = " << iFaren << " F" << endl;

  return 0;
}
