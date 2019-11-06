/*****************
James Bertel
CS111
Lab 6-1
10-30-2017
*****************/
#include <iostream>
#include <cstdlib>
using namespace std;

void selectionSort(int array[], int N);

int main()
{
  srand(time(0));

  const int SIZE = 10;

  int ar[SIZE];

  for(int i = 0; i < SIZE; i++)
    ar[i] = rand()% 100 + 1;
  
  selectionSort(ar, SIZE);

  cout << "\nThe numbers in the array are ";
    for(int i = 0; i < SIZE; i++)
      cout << ar[i] << " ";

    cout << endl << endl;

  return 0;
}


void selectionSort(int array[], int N) 
{
  int lrgIndx; //the index of the largest value
  int temp; //temporary variable that holds the largest value

  //last is the last index in unsorted portion
  for(int last = N-1; last >= 1; last--) 
    {
      lrgIndx = 0; //assume the first item is the largest
      //find the largest in unsorted portion ([0..last])
      for(int i = 1; i <= last; i++) 
	{
	  if(array[i] > array[lrgIndx]) //The current item is larger 
	    lrgIndx = i;
	}

      //swap the largest with the last item in the unsorted portion
      temp = array[lrgIndx]; 
      array[lrgIndx] = array[last]; 
      array[last] = temp;
    } 
}
