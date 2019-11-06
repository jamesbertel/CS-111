/*****************************************************************
James Bertel
CS111
11-8-17
assignment 6 - 2dArray.cpp

This program will ask the user for test scores for every student. It will then print all the scores, and the average test score for each test.
*****************************************************************/ 
#include <iostream>
#include <iomanip>
using namespace std;

//global variables
const int SIZE_STU = 5; //number of students
const int SIZE_TEST = 3; //number of tests

//prototypes
void fillArray(int scores[][SIZE_TEST]);
void showTable(const int scores[][SIZE_TEST]);

int main()
{

  int scores[SIZE_STU][SIZE_TEST]; //declare array

  fillArray(scores);
  showTable(scores);
  

  return 0;
}

/***********
test == test number index in array
stu == student number index in array
This function will fill the array with the students' scores
***********/
void fillArray(int scores[][SIZE_TEST])
{
  for(int test = 0; test < SIZE_TEST; test++)
    {
      cout << "\nEnter scores for Test #" << test + 1 << endl;
      
      for(int stu = 0; stu < SIZE_STU; stu++)
	{
	  cout << "\tStudent #" << stu + 1 << ": ";
	  cin >> scores[stu][test];
	}
    }
}

/***********
total == test scores added together
This function will print the test scores for every student, 
as well as every test average and each student's test average.
***********/
void showTable(const int scores[][SIZE_TEST])
{
  int total; //test scores added together

  //Shows the labels for the table
  cout << endl << setw(10) << "Test#" << setw(10) << "Stu 1" << setw(10) << "Stu 2";
  cout << setw(10) << "Stu 3" << setw(10) << "Stu 4" << setw(10) << "Stu 5";
  cout << setw(10) << "Average" << endl;

  //prints a line for each test
  for(int test = 0; test < SIZE_TEST; test++)
    {
      cout << setw(10) << test + 1; //test number
      total = 0; //starts each total at 0
      
      //prints every students' test score
      for(int stu = 0; stu < SIZE_STU; stu++)
	{	
	  cout << setw(10) << scores[stu][test]; //print test score
	  total += scores[stu][test]; //adds score to total
	}
      
      cout << setw(10) << fixed << setprecision(1) << (double)total/SIZE_STU << endl;
    }

  cout << setw(10) << "Average";

  //finds each student average
  for(int stu = 0; stu < SIZE_STU; stu++)
    {
      total = 0; //starts each total at 0

      for(int test = 0; test < SIZE_TEST; test++)
	total += scores[stu][test]; //adds score to student's total

      cout << setw(10) << (double)total/SIZE_TEST; //outputs average per student
    }
	  
  cout << endl << endl;
}
