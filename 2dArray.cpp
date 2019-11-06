/*****************************************************************
James Bertel
CS111
11-1-17
Lab 6-2
*****************************************************************/ 
#include <iostream>
#include <iomanip>
using namespace std;

//declare 2 constants for the sizes of the 2 dimensional array
const int SIZE_STU = 5;
const int SIZE_TEST = 3;
void showTable(const int scores[][SIZE_TEST]);

int main()
{
  //declare the 2 dimensional array and initialize the array using the initialization list
  int scores[SIZE_STU][SIZE_TEST] = { {45, 67, 78}, {78, 88, 56}, {86, 96, 78}, {78, 77, 67}, {67, 57, 57} };

  showTable(scores);
  

  return 0;
}

void showTable(const int scores[][SIZE_TEST])
{
  int total;

  //Show the labels for the table
  cout << setw(10) << "Test#" << setw(10) << "Stu 1" << setw(10) << "Stu 2" << setw(10) << "Stu 3" 
       << setw(10) << "Stu 4" << setw(10) << "Stu 5" << setw(10) << "Average" << endl;

  for(int test = 0; test < SIZE_TEST; test++)
    {
      cout << setw(10) << test + 1;
      total = 0;
      for(int stu = 0; stu < SIZE_STU; stu++)
	{	
	  cout << setw(10) << scores[stu][test];
	  total += scores[stu][test];
	}
      cout << setw(10) << fixed << setprecision(1) << (double)total/SIZE_STU << endl;
       
    }
}
