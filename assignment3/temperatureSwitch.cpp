/**************************************                                                   James Bertel
CS111
Assignment 2: temperature.cpp
9-27-2017

This program will as for a temperature between Farenheit and Celsius, and convert it to the other unit.
****************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //variables
  char unit; //user will declare if unit is F or C
  int celsius; //celsius entered
  int faren; //celsius entered
  double cFaren; //farenheit after C->F conversion
  double cCelsius; //celsius after F->C conversion                                                                                                                                                          
  cout << "Which temperature do you have? Enter F for Fahrenheit or C for Celsius: ";
  cin >> unit;

  switch(unit)
    {
    case 'C':
    case 'c': cout << "Enter a temperature in Celsius: ";
              cin >> celsius;
              cFaren = 1.8 * celsius + 32; //C to F conversion
              cout << celsius << " Celsius = " << fixed << setprecision(2) << cFaren << " Fahrenheit" << endl << endl;
              break;
    case 'F':
    case 'f': cout << "Enter a temperature in Fahrenheit: ";
              cin >> faren;
              cCelsius = (faren-32)/1.8; //F to C conversion
              cout << faren << " Fahrenheit = " << fixed << setprecision(2) << cCelsius << " Celsius" << endl;
              break;
     default: cout << "Invalid choice" << endl;
	}
  return 0;
}
