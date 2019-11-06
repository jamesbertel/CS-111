#include <iostream>
using namespace std;

int main()
{
  for(int row = 1; row <= 3; row++)
    {
      for(int col = 1; col <= 2; col++)
	cout << "*";

      cout << endl;

    }

  cout << endl;
 
  for(int r=1; r <= 4; r++)
    {
      for(int c=1; c<= r*2; c++)
	cout << "*";

      cout << endl;
    }
  return 0;
}
