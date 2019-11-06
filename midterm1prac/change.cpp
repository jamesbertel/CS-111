#include <iostream>
using namespace std;
/**********************************************************
This program will calculate the numbers of quarters, dimes, nickels and pennies.
**********************************************************/
int main()
{
  int change;
  int q, d, n, p;

  cout << "Enter the change: ";
  cin >> change;

  q = change/25;
  change %= 25;
  d = change/10;
  change %= 10;
  n = change/5;
  p %= 5;

  cout << q << " quarters, " << d << " dimes, " << n << " nickels and " << p << " pennies." << endl;

  return 0;
}
