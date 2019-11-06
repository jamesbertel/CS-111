#include<iostream>
using namespace std;

int main()
{
  int count=0;

  for(int i=32; i<=127; i++)
    {
      cout << (char)i << "   ";
      count++;
      if(count==16)
	{
	  cout << endl;
	  count=0;
	}
    }

  cout << endl;

  return 0;
}
