#include <iostream>
using namespace std;

int main()
{
  double dNum;

  cout << "Enter a decimal number: ";
  cin >> dNum;

  int iNum = dNum + 0.5;

  cout << dNum << " rounded to the nearest integer is " << iNum << endl;

  return 0;
}
