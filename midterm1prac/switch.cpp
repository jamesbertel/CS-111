#include<iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;

  num %= 2;

  switch(num)
    {
    case 0: cout << "even\n";
      break;
    case 1: cout << "odd\n";
      break;
    default: cout << "Invalid number";
    }
  return 0;
}
