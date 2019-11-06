/************************
James Bertel
CS111
Assignment 4 - age.cpp
10-13-17

This program will read an unknown number of ages, and find the average age, number of minors, number of adults, the youngest age, and the oldest age.
***********************/
#include <iostream>
using namespace std;

int main()
{
  //variables
  int age; //age entered
  int total=0; //total used to find average
  int minors=0; //total number of minors
  int adults=0; //total number of adults
  int oldest; //oldest age
  int youngest; //youngest age

  //first input
  cout << "Enter an age: ";
  cin >> age;

  //process
  oldest = age; //makes a default oldest age
  youngest = age; //makes a default youngest age

  while(age>=0) //when the age is greater than zero
    {
      total += age; //adds age to total

      if(age<18) //checks to see if age is a minor age
	minors++;
      else // age >= 18 ; checks to see if age is an adult age
	adults++;

      if(age>oldest) //checks to see if age is oldest
	oldest = age;
      if (age<youngest) //checks to see if age is youngest
	youngest = age;

      cout << "Enter an age: ";
      cin >> age;
    }

  //output(s)
  if((minors+adults)==0) //if no ages were entered and count remainded zero
    cout << endl << "No ages were entered" << endl << endl;

  else //count >=1
    {
      cout << endl << (double)total/(minors+adults) << " (average)" << endl; //finds average
      cout << minors << " (minors)" << endl;
      cout << adults << " (adults)" << endl;
      cout << oldest << " (oldest)" << endl;
      cout << youngest << " (youngest)\n" << endl;
    }
  return 0;
}
