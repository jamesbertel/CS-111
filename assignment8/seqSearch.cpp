/******************************************************
James Bertel
CS111
Assignment 8 - HW on sequential search
12-4-17

This program will do a three sequential searches of 
an array.
******************************************************/
#include <iostream>
#include<cstdlib>
using namespace std;

//prototypes
void fillArray(int ar[], int s);
void printArray(int ar[], int s);
bool sequentialSearch_bool(const int a[], const int s, int k);
int sequentialSearch_int(const int a[], const int s, int k);
void sequentialSearch_void(const int a[], const int s, int k);

int main()
{
  //declare constant SIZE and set it to 10
  const int SIZE = 10;
  int array[SIZE];

  //call fillArray to fill the array
  srand (time(0)); //to create random numbers
  fillArray(array, SIZE);

  //call printArray
  printArray(array, SIZE);

  //ask for key
  int key;
  cout << "Enter key: ";
  cin >> key;

  //call sequentialSearch_bool
  bool found = sequentialSearch_bool(array, SIZE, key);

  if(found == true)
    cout << "\nKey was found\n" << endl;
  else //found == false
    cout << "\nKey was not found\n" << endl;

  //call sequentialSearch_int
  int index = sequentialSearch_int(array, SIZE, key);

  if(index == -1)
    cout << "Key was not found\n" << endl;
  else //found == false
    cout << "Key was found at index " << index << "\n" << endl;

  //call sequentialSearch_void
  sequentialSearch_void(array, SIZE, key);

  return 0;
}


/***********************************************************
Fill the integer array with random numbers between 0 and 100.
ar == integer array
s == size of the array
************************************************************/
void fillArray(int ar[], int s)
{
  for(int i = 0; i < s; i++)
    ar[i] = rand()% 100 + 1;
}

/**********************************************************
Print all the numbers in the array to the screen
ar == integer array
s == size of the array
**********************************************************/
void printArray(int ar[], int s)
{
  for(int i = 0; i < s; i++)
    cout << ar[i] << " ";

  cout << endl << endl;
}

/***********************************************************
sequential search: returns true if key exists, otherwise
returns false.

Parameters: a - integer array
            s - size of the array
            k - key
************************************************************/
bool sequentialSearch_bool(const int a[], const int s, int k)
{
  for(int i = 0; i < s; i++)
    {
      if(a[i] == k)
	return true;
    }
  return false;
}

/***********************************************************
sequential search: returns the index where key was found or -1 if not found.

Parameters: a - array
            s - size of array
            k - key
************************************************************/
int sequentialSearch_int(const int a[], const int s, int k)
{
  for(int i = 0; i < s; i++)
    {
      if(a[i] == k)
        return i;
    }
  return -1;
}

/***********************************************************
sequential search: void function. Show the result within this function.

Parameters: a - array
            s - size of array
            k - key
************************************************************/
void sequentialSearch_void(const int a[], const int s, int k)
{
  bool found = false;
  
  for(int i = 0; i < s && found == false; i++)
    {
      if(a[i] == k)
	found = true;
    }
 
  if(found == true)
    cout << "Key was found\n" << endl;
  else //found == false
    cout << "Key was not found\n" << endl;
}
