#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

  int ques;
  int cCount=0;
  int iCount=0;
  cout << "How many questions do you want to answer?: ";
  cin >> ques;

  for (int i=1; i<=ques; i++)
    {
      srand(time(0));
      int num1 = rand()% 10 + 1;
      int num2 = rand()% 10 + 1;
      int ans;
      cout << num1 << " + " << num2 << " = ";
      cin >> ans;

      if(ans==(num1+num2))
	{	
	  cout << "You got the correct answer!" << endl;
	  cCount++;
	}
      else //ans != num1+num2
	{	
	  cout << "Incorrect answer!" << endl;
	  iCount++;
	}
    }

  cout << "You got " << cCount << " correct and " << iCount << " incorrect." << endl;

 return 0;
}
