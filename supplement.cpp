/**************************
James Bertel
CS111
Lab 
10-16-17

This program will...
**************************/
#include <iostream>
using namespace std;

//prototypes
int getNumber();
void getNumbers(int &n1, int& n2);
void printNum(int num1, int num2);

int main()
{
  int num1, num2;
  //get two numbers from the keyboard
  num1 = getNumber();
  num2 = getNumber();
  //What is the difference between the following 2 statements?
  { num1 = getNumber(); v.s. getNumber();
    //OR another way to get 2 numbers at once
    getNumbers(num1, num2);
    /*Do we need datatypes or & in function calls as in getNumber(int& num1, int& num2)?
      Can we use n1 and n2 in main as in getNumber(n1, n2)?*/
    printNum(num1, num2);
    /*Can we call*/"printNum()"/* in a cout as in*/ "cout << printNum(num1, num2);" //?
   }
   return 0;
}

int getNumber() ß Why is the return type int?
{
  int num; //declare the variable to be returned inside this function. Don’t pass it from main.
  cout << “Enter a number: “;
  cin >> num;
  return num;
}

/*The parameters have to be passed by reference since we need to send 2 numbers back to the
  caller(main).*/

void getNumbers(int &n1, int& n2) //Why do we need & for each parameter here? What does & do?
{// Can we use num1 and num2 as parameter names here?
  cout << "Enter the first number: ";// Notice the return type is void with pass by reference.
  cin >> n1; //Can we use num1 here instead of n1?
  cout << "Enter the second number: ";
  cin >> n2; //Can we use num2 here instead of n2?
}

/*The parameters should be passed by value since we don’t change the 2 numbers here.*/

void printNum(int num1, int num2) //Why don’t we need &s for the parameters here?
{// Can we use n1 and n2 as parameter names here?
  cout << num1 << “ “ << num2 << endl; //Notice the return type is void.
}
