/****************************
James Bertel
CS111
Lab 5-1
10-11-17

This program will read 3 numbers from the user and tell the largest number.
*****************************/
#include<iostream>
using namespace std;

void showProgInfo();
int getNum();
int findLargest(int n1, int n2, int n3);
void printResult(int n1, int n2, int n3, int largest);

int main()
{
 showProgInfo();

 int num1 = getNum();
 int num2 = getNum();
 int num3 = getNum();

 int large = findLargest(num1, num2, num3);

 printResult(num1, num2, num3, large);

  return 0;
}


void showProgInfo()
{
  cout << "*****************************************************" << endl;
  cout << "This program will ask you to enter 3 numbers and find the largest." << endl;
  cout << "*****************************************************" << endl;
}

int getNum()
{
  int num;

  cout << "Enter a number : ";
  cin >> num;

  return num;
}

int findLargest(int n1, int n2, int n3)
{
  int largest;

  if(n1>n2)
    largest = n1;
  else //n2>=n1
    largest = n2;

  if(n3>largest)
    largest = n3;

  return largest;
}

void printResult(int n1, int n2, int n3, int largest)
{
  cout << "The largest number among " << n1 << ", " << n2 << " and " << n3 << " is " << largest << ".\n";
}
