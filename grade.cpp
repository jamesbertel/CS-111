/*****************************************************
James Bertel
CS111
Lab 3-1
9/25/2017

This program will ask the user for a grade (A, B, C, D OR F) and display a message depending on the grade
*****************************************************/
#include <iostream>
#include <cmath> 
using namespace std;

int main()
{

  //declare variables
  char grade;
  bool pass = false;

  //inputs
  cout << "Enter a grade: ";
  cin >> grade;

  //outputs
  if (grade == 'A' || grade == 'B')
  {
    cout << "Good job!" << endl;
    pass = true;
  }
  else if (grade == 'C')
  { cout << "OK" << endl;
     pass = true;
  }
  else if (grade == 'D' || grade == 'F')
    cout << "Work harder" << endl;
  else 
    cout << "Invalid grade" << endl;
  
  if (pass == true)
    cout << "Congratulations! You passed the class. " << endl;

  return 0;
}



