#include <iostream>
using namespace std;

int main()
{
  int total=0;
  int pass=0;//, pass, fail=0;
  int score;
  int fail=0;
  
  do
    {
      cout << "Enter a score: ";
      cin >> score;
    }while(score>100);

  while(score>=0)
    {
      total+=score;

      if(score>=75)
	pass++;
      else //score<75
	fail++;

      cout << "Enter a score: ";
      cin >> score;
    }

  if(pass+fail==0)
    cout << "No scores entered";
  else
      cout << "pass " << pass << ", fail " << fail << ", average " << total/(pass+fail) << endl;

  return 0;
}
