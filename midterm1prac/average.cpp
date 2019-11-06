#include <iostream>
using namespace std;

int main()
{
  int score, avg;
  int total=0;

  for(int i=1; i<=10; i++)
    {
      cout << "Enter a score: ";
      cin >> score;
      
      total+=score;
    }

  cout << "Avg score = " << total/10 << endl;

  return 0;
}
