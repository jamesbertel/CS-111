#include<iostream>
using namespace std;

int main()
{
  int id;
  
  cout << "ENter your student ID: ";
  cin >> id;

  cout << "your student ID is " << id << endl;
  
  const double TAX_RATE = 8.75;
  const double PI = 3.14;

  cout << "The tax rate is " << TAX_RATE << endl;
  cout << "pi = " << PI << endl;

  return 0;
}
