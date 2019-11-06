/******************
James Bertel
CS111
Lab 2-1: constant.cpp
9-11-17

This program will obtain the user's information and the radius of a circle.
Then the program should calculate the area and circumference of the circle, 
and display them along with the user's info.
*******************/
#include <iostream>
using namespace std;

int main()
{
  const double PI = 3.14; //pi value
  int age; //age of the user
  float gpa; //GPA of user
  char gen; //gender of user
  string firstName; //first name of user
  float rad; //radius that user entered
  float area; //area of the circle
  float circ; //circumference of the circle

  //INPUTS: Ask for the user's info
  cout << "Enter your age: ";
  cin >> age;
  cout << "Enter your gpa: ";
  cin >> gpa;
  cout << "Enter your gender: ";
  cin >> gen;
  cout << "Enter your first name: ";
  cin >> firstName;
  cout << "Radius of the circle: ";
  cin >> rad;

  //PROCESS: Calculate circ and area
  area = PI * rad * rad;
  circ = 2 * PI * rad;
 
  //OUTPUTS
  cout << "Hello " << firstName << endl;
  cout << "Your age is " << age << endl;
  cout << "Your GPA is " << gpa << endl;
  cout << "Your gender is " << gen << endl;
  cout << "The area is " << area << endl;
  cout << "The circumference is " << circ << endl;
  
  return 0;
}
