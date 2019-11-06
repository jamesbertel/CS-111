/*********************************
James Bertel
CS111
Lab 4-1 / 4-2
12-2-17

This program will read an unknown number of positive or negative numbers from the keyboard and output "even" if the number is even or "odd" if it is odd. The user will enter a zero when there are no more numbers to input. The program should display the total number of even numbers, the total number of odd numbers and the average number in the end.
*********************************/
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
  //variables
  char ans; //y or n
  int num;
  int count=0; //total amount of numbers
  int eCount=0; //total amount of even numbers
  int oCount=0; //total amount of odd numbers
  int total=0; //total of added numbers

  //input the first number
  cout << "Do you have a number to check? y or n: ";
  cin >> ans; //answer

  while(ans=='y'||ans=='Y')
    {
      cout << "Enter a number: ";
      cin >> num;

      count++;
      //check if the number is even or odd
      if(num%2)
	{
	  cout << num << " is odd" << endl << endl;
	  oCount++;
	  total+=num;
	}
      else
	{
	  cout << num << " is even" << endl << endl;
	  eCount++;
	  total+=num;
	}
      cout << "Do you have a number to check? y or n: ";
      cin >> ans;
    }

  if(ans=='n'||ans=='N')
    {
       if(count==0) //The user didn't check number for even or odd.
       cout << "\nNo numbers were checked" << endl;
       else
	 {
	   cout << endl;
	   cout << eCount << " even numbers" << endl;
	   cout << oCount << " odd Numbers" << endl;
	   cout << "The average is " << fixed << setprecision(2) << (double)total/count << endl;
	 }
    }

  return 0;
}
