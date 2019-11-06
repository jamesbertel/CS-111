#include<iostream>
using namespace std;

int main()
{
  char grade;
  cout << "Enter your grade: ";
  cin >> grade;   //The user enters a grade (A, B, C, D or F) here

  if(grade=='A'||grade=='B')
    cout << "your grade is an A or B";
  else
    cout << "your grade is not an A or B.";


  //#2
  int age;
  cout << endl << "Enter your age: ";
  cin >> age;

  if(age>=20 && age<=30)
    cout << "You are between age 20 and 30" << endl;
  else
    cout << "You are not between age 20 and 30" << endl;

  return 0;
}
