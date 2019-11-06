/*****************************************************
James Bertel
CS111
Lab 3-1
9-25-2017

This program will ask the user to enter their age and it will display one of the mesages below depending on the age.
*****************************************************/
#include <iostream>
#include <cmath> 
using namespace std;

int main()
{

  //declare variables
  int age;

  //inputs
  cout << "Please enter your age: ";
  cin >> age;

  //outputs
  if(age < 0)
    cout << "Invalid age" << endl;
  else if(age <= 16)
    cout << "You need to wait " << 17-age << " more years." << endl;
  else if(age >= 17 && age <= 42)
    cout << "The military is hiring more people like you." << endl;
  else
    cout << "Thank you for using the system." << endl;

  return 0;
}



