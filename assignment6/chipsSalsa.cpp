/****************************************
James Bertel
CS111
assignment 6 - chipsSalsa.cpp
11-8-17

This program lets a maker of chips and salsa keep track of sales for five 
different types of salsa: mild, medium, sweet, hot, and zesty.
****************************************/
#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 5; //number of types of salsa

//prototypes
void fillJarsSoldArray(const string s[], int j[]);
void printSales(const string s[], const int j[]);
int getTotal(const int j[]);
void getHighestLowestSelling(const int jar[], int&highest, int&lowest);

int main()
{
  
  string salsas[SIZE] = {"mild", "medium", "sweet", "hot", "zesty"}; //types of salsa
  int jars[SIZE]; //number of jars sold per salsa type

  fillJarsSoldArray(salsas, jars);
  printSales(salsas, jars);
  cout << "The total number of jars sold is " << getTotal(jars) << endl;\

  int highest; //highest number of jars sold
  int lowest; //lowest number of jars sold
  getHighestLowestSelling(jars, highest, lowest);

  cout << "The highest selling type is " << salsas[highest] << endl;
  cout << "The lowest selling type is " << salsas[lowest] << endl;

  return 0;
}

/***********
This function prompts the user to enter the # of jars sold for each salsa type
and fills the jars sold array.
***********/
void fillJarsSoldArray(const string s[], int j[])
{
  for(int i = 0; i < SIZE; i++)
    {
      do
	{
	  cout << "Enter the number of jars sold for " << s[i] << ": ";
	  cin >> j[i];
	}while(j[i] < 0); //ensures the number of jars sold is positive

      cout << endl;
    }
}

//This function displays the sales for each salsa type.
void printSales(const string s[], const int j[])
{
  for(int i = 0; i < SIZE; i++)
      cout << left << setw(10) << s[i] << right << setw(5) << j[i] << endl;
}

/***********
total == total number of jars sold
This function will return the total number of jars sold.
***********/
int getTotal(const int j[])
{
  int total = 0; //total number of jars
  for(int i = 0; i < SIZE; i++)
    total += j[i];

  return total;
}

/***********
highest == index of highest value
lowest == index of lowest value
last == last index in unsorted portion
This function finds the highest and lowest selling salsas
***********/
void getHighestLowestSelling(const int jar[], int&highest, int&lowest)
{
  highest = 0;
  lowest = 0;
 
  for(int i = 1; i < SIZE; i++)
    {
      if(jar[i] > jar[highest])
	highest = i;

      if(jar[i] < jar[lowest])
        lowest = i;
    }
}
