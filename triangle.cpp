/****************************************
James Bertel
CS111
Extra Credit - triangle.cpp
11-27-17

In this program, the user will enter the 3 points of a triangle. 
The program should tell if the triangle is equilateral, isosceles or scalene.
****************************************/
#include <iostream>
#include "myMath.h"
using namespace std;

void showProgInfo();
void getXY(int&x, int&y);
double findLength(int x1, int x2, int y1, int y2);
void findTriangleType(double a, double b, double c);

int main()
{
  showProgInfo();

  int x1, y1, x2, y2, x3, y3; //all x and y coordinates for all three points

  getXY(x1, y1);
  getXY(x2, y2);
  getXY(x3, y3);

  double a = findLength(x1, x2, y1, y2);
  double b = findLength(x1, x3, y1, y3);
  double c = findLength(x2, x3, y2, y3);
  
  findTriangleType(a, b, c);

  return 0;
}

/***********
'ent' == character for enter key
This function will show the program information and have the user press "enter" to continue.
***********/
void showProgInfo()
{
  char ent;

  cout << "*****************************************************************" << endl;
  cout << "This program will ask you to enter 3 points of a triangle and tell ";
  cout << "\nwhat kind of triangle it is. Please hit ENTER to continue." << endl;
  cout << "*****************************************************************" << endl;
  cin.get(ent);
}

/***********
x == x-coordinate
y == y-coordinate
This function will get the coordinates for one point of a triangle
**********/
void getXY(int&x, int&y)
{
  cout << "\nEnter an x-coordinate: ";
  cin >> x;
  cout << "Enter a y-coordinate: ";
  cin >> y;
}

/***********
This function will find the length between 2 points
It will use the distance formula, sqrt() and pow()
***********/
double findLength(int x1, int x2, int y1, int y2)
{
  return sqrt( pow(x2-x1, 2) + pow(y2-y1, 2) );
}

/************
This function will tell the user what type of triangle the triangle is.
***********/
void findTriangleType(double a, double b, double c)
{
  cout << "\nThe triangle is ";

  if(fabs(a - b) < 0.00001) //if side a == side b
    {
      if(fabs(a - c) < 0.00001) //a == c
	cout << "equilateral" << endl;
      else //b != c
	cout << "isoceles" << endl;
    }

  else //a != b
    {
      if(fabs(b - c) < 0.00001) //side b == side c
	cout << "isoceles" << endl;
      else //b != c 
	cout << "scalene" << endl;
    }
  cout << endl;
}
