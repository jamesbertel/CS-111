/****************************************
James Bertel
CS111
assignment 6 - array.cpp
11-8-17

This program will offer a variety of functions for an array of integer values.
****************************************/
#include <iostream>
using namespace std;

const int SIZE = 5; //global variable for the size of the array

//prototypes
void fillArray(int ar[]);
void printArray(const int ar[]);
double findAvg(const int a[]);
int findHighest(const int a[]);
void doubleArray(int a[]);
void selectionSort(int a[]);
int sequentialSearch(const int ar[], int key);
void showBarGraph(const int ar[]);

int main()
{

  int ar[SIZE]; //the empty array
  int choice; //choice of the user
  double average; //average number in the array
  int highest; //highest number
  int key; //key entered by user
  int keyInd; //index where the key is found

  do
    {
      cout << endl;
      cout << "=============" << endl;
      cout << "1: fill the array" << endl;
      cout << "2: print the array" << endl;
      cout << "3: calculate the average" << endl;
      cout << "4: show the highest number" << endl;
      cout << "5: double each number" << endl;
      cout << "6: selection sort in descending order" << endl;
      cout << "7: sequential search" << endl;
      cout << "8: show bar graph" << endl;
      cout << "9: quit" << endl;
      cout << "=============" << endl;
      cout << "Enter your choice: ";
      cin >> choice;

      switch(choice)
	{
	case 1: fillArray(ar);
	  break;
	case 2: printArray(ar);
	  break;
	case 3: cout << "\nThe average number is " << findAvg(ar) << endl;
	  break;
	case 4: cout << "\nThe highest number is " << findHighest(ar) << endl;
	  break;
	case 5: doubleArray(ar);
	  break;
	case 6: selectionSort(ar);
	  break;
	case 7: cout << "\nEnter the key: ";
	        cin >> key;
	        keyInd = sequentialSearch(ar, key);
		if(keyInd >= 0)
		  cout << endl << key << " was found at index " << keyInd << ".\n";
		else //keyInd < 0
		  cout << endl << key << " was not found.\n";
	  break;
	case 8: showBarGraph(ar);
	  break;
	case 9: cout << "\nThank you for using our system.\n" << endl;
	  break;
	default: cout << "\nInvalid choice" << endl;
	}
    }while(choice !=9);

  return 0;
}

/***********
CHOICE #1
This function fills the array
***********/
void fillArray(int ar[])
{
  cout << endl; 

  for(int i = 0; i < SIZE; i++)
    {
      cout << "Enter a number: ";
      cin >> ar[i];
    }
}

/***********
CHOICE #2
This function prints the array
***********/
void printArray(const int ar[])
{
  cout << "\nThe numbers in the array are ";

  for(int i = 0; i < SIZE; i++)
      cout << ar[i] << " ";

  cout << endl;
}

/***********
CHOICE #3
total == total of all numbers in array
This function finds the average number in the array
***********/
double findAvg(const int a[])
{
  int total = 0;
  for(int i = 0; i < SIZE; i++)
    total += a[i];

  return (double)total/SIZE;
}

/***********
CHOICE #4
highest == highest number in the index
This function finds the highest number in the array
***********/
int findHighest(const int ar[])
{
  int highest = 0; //assumes first index has highest score

  //check each score to find highest (so far)
  for(int i = 1; i < SIZE; i++)
    {
      if(ar[i]>ar[highest])
	highest = i;
    }

  return ar[highest];
}

/***********
CHOICE #5
This function doubles each number in the array
***********/
void doubleArray(int a[])
{
  for(int i = 0; i < SIZE; i++)
    a[i] *= 2; //double each number in the array
}

/***********
CHOICE #6
smallest == index of smallest value
temp == temporary variable that holds smallest value
This function sorts the array
***********/
void selectionSort(int a[])
{
  int smallest; //index of smallest value
  int temp; //temporary variable that holds smallest value

  //last is the last index in unsorted portion
  for(int last = SIZE-1; last >= 1; last--)
    {
      smallest = 0; //assume first item is smallest

      //find the smallest in unsorted portion
      for(int i = 1; i <= last; i++)
	{
	  if(a[i] < a[smallest])
	    smallest = i;
	}

      //swap the smallest with the last item in the unsorted portion
      temp = a[smallest];
      a[smallest] = a[last];
      a[last] = temp;
    }
}

/***********
CHOICE #7
L == most lefthand number
r == most righthand number
m == middle number
key == key being search for
This function finds the key in the array
***********/
int sequentialSearch(const int ar[], int key)
{
  int L = 0; //lefthand number
  int r = SIZE-1; //righthand number
  int m = (L+r)/2; //middle number

  while(L <= r)
    {
      for(int i = 0; i < SIZE; i++)
	{
	  if(ar[i] == key)
	    return i;
	  else if(ar[i] < key)
	    L = m + 1;
	  else // ar[i] > key
	    r = m - 1;
	}
    }

  return -1; //key not found
}

/***********
CHOICE #8
stars == number of stars for each slot
This function prints stars for a bar graph of the array
***********/
void showBarGraph(const int ar[])
{
  cout << endl;
  int stars; //number of stars for each slot
  for(int i = 0; i < SIZE; i++) //going through each slot
    {
      cout << "Slot " << i << ": ";
      stars = ar[i]/10; //finds number of stars needed

      //shows stars
      for(int s = 0; s < stars; s++) 
	cout << "*";

      cout << endl;
    }
}
