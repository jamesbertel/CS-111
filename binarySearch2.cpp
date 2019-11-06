/*****************
James Bertel
CS111
Lab 6-1
10-30-2017
*****************/
#include <iostream>
using namespace std;

int binarySearch(const int a[], int s, int key);

int main()
{
  const int SIZE = 10;
  int ar[SIZE] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
  int key;

  cout << "Enter key: ";
  cin >> key;

  cout << key << " was found at " << binarySearch(ar, SIZE, key) << endl; 

  return 0;
}

//This function returns the index where key is found or -1 if key is not found.
//s is the size of the array.
//key is the number being searched for.
int binarySearch(const int a[], int s, int key)
{
  int L = 0; //left boudary starts at first index
  int r = s-1; //right boundary starts at last index
  int m; //middle point between left and right.

  //When L and r cross over, search ends. --> key was not found. 
  while(L <= r)
    {
      //calculate the middle point between L and r
      m = (L + r)/2;

      if(a[m] == key) //key was found
	return m;
      else if(key < a[m])
	L = m + 1;
      else if(key > a[m])
	r = m - 1;
    }
  
  return -1; //key wasn't found
}
