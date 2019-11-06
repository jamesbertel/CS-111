#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

  double n = 1.987654321;

  cout << setw(5) << "n=" << n << endl << endl;

  cout << left << setw(10) << "Number" << right << setw(8) << fixed << setprecision(3) << n << endl;

  return 0;
}


/*
   n=1.987654321

Number____|____1.988



*/
