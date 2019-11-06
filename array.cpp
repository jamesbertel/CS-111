/****************************************
James Bertel
CS111
Lab 6-1
10-25-17
****************************************/
#include <iostream>
using namespace std;

void fillArray(int ar[]);
void printArray(const int ar[]);
const int SIZE = 5;

int main()
{

  int ar[SIZE];
  int choice;
  do
    {
      cout << "=============" << endl;
      cout << "1: fill the array" << endl;
      cout << "2: print the array" << endl;
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
	case 9: cout << "\nThank you for using our system.\n";
	  break;
	default: cout << endl << "invalid choice\n" << endl;
	}
    }while(choice !=9);

  return 0;
}

void fillArray(int ar[])
{
  cout << endl; 

  for(int i = 0; i < SIZE; i++)
    {
      cout << "Enter a number: ";
      cin >> ar[i];
    }
  cout << endl;
}

void printArray(const int ar[])
{
  cout << "\nThe numbers in the array are ";

  for(int i = 0; i < SIZE; i++)
      cout << ar[i] << " ";

  cout << endl << endl;
}
