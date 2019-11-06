/****************************************
James Bertel
CS111
Lab 5-2
10-13-17

This program will verify the eligibility of joining the military from the
user’s gender and age. Make the following 4 functions in addition to the main.
****************************************/
#include <iostream>
using namespace std;

void showProgInfo();
void getInfo(string &name, char &gen, int &age);
bool verifyEligibility(char gen, int age);
void printLetter(string name, bool elig);

int main()
{
  string name;
  char gen;
  int age;

  showProgInfo();
  getInfo(name, gen, age);
  bool elig = verifyEligibility(gen, age);
  printLetter(name, elig);

  return 0;
}

void showProgInfo()
{
  cout << "****************************************************" << endl;
  cout << "This program will tell you if you are eligible to join the military." << endl;
  cout << "****************************************************" << endl;
}

void getInfo(string &name, char &gen,int &age)
{
  cout << "Enter first name: ";
  cin >> name;

  cout << "Enter gender (m or f): ";
  cin >> gen;

  cout << "Enter age: ";
  cin >> age;
}

bool verifyEligibility(char gen, int age)
{
  bool elig;

  if(gen=='m' || gen=='M')
    {
      if(age >= 17 && age <= 42)
	elig=true;
      else
	elig=false;
    }
  else
    elig=false;

  return elig;
}

void printLetter(string name, bool elig)
{
  if(elig==true)
    cout << "Dear " << name << ", Please consider joining the military" << endl;
  else
    cout << "Thank you for applying." << endl;
}
