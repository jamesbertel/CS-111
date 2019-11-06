/*****************************************************
James Bertel
CS111
Lab

This program will ask the user to enter their age and gender, and it will display one of the mesages below depending on their age and gender
*****************************************************/
#include <iostream>
  using namespace std;

int main()
{

   //declare variables
   int age;
   char gen;

   cout << "Please enter your gender: ";
   cin >> gen;

   if(gen=='m' || gen=='M')
     {
     cout << "Please enter your age: ";
     cin >> age;
     if(age < 0)
       cout << "Invalid age" << endl;
     else if(age <= 16)
       cout << "You need to wait " << 17-age << " more years." << endl;
     else if(age >= 17 && age <= 42)
       cout << "The military is hiring more people like you." << endl;
     else
       cout << "Thank you for using the system." << endl;
     }
   else if(gen=='f' ||gen=='F')
     cout << "Thank you for using the system, but we were only looking for men." << endl;
   else //gen != m, M, f, or F
     cout << "Invalid gender." << endl;

  return 0;
}
