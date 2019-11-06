#include <iostream>
using namespace std;

const int SIZE = 5;
void fillJarsSoldArray(const string n[], int j[]);
void printSales(const string n[], const intj[]);

int main()
{
  string names[SIZE] = {"mild", "medium", "sweet", "hot", "zesty"};
  int jars[SIZE];
  fillJarsSoldArray(names, jars);
  printSales();
  //getTotal();
  int highest;
  int lowest;
  getHighestLowestSelling(jars, highest, lowest);

}
void getHighestLowestSelling(int j[], int high, int low)
{
  high = 0;
  low = 0;

  for(int i = 0; i < SIZE; i++)
    {
      if(j[i] > high)
	high = j[i];
      if(j[i] < low)
	low = j[i];
    }


void printSales(const string n[], const int j[])
{
  cout << endl;
  for(int i = 0; i < SIZE; i++)
    {
      cout << left << setw(10) << n[i] << right;
      cout << setw(5) << j[i] << endl;
    }
}

void fillJarsSoldArray(const string n[], int j[])
{

  for(int i = 0; i < SIZE; i++)
    {
      do
	{
	  cout << "Enter the number of jars sold for " << n[i] << ": \n";
	  cin >> j[i];
	}while(j[i] < 0);
      cout << endl;
    }
}
