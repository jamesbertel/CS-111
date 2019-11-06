/****************************************
James Bertel
CS111
Lab 12 - struct.cpp
11/13/2017
****************************************/
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;

const int SIZE = 100;

struct employee
{
  string firstN;
  string lastN;
  char gender;
  double rate;
  int empId;
  int age;
};

void readData(employee mAr[], employee fAr[], int &mi, int &fi);
void printEmployee(const employee ar[], int x);
void printAllEmp(const employee mAr[], const employee fAr[], int mi, int fi);

//int mi=0;
//int fi=0;

int main()
{
  const int SIZE = 100;
  employee mAr[SIZE];
  employee fAr[SIZE];

  int mi=0;
  int fi=0;

  readData(mAr, fAr, mi, fi);
  //cout << "there are " << mi << " males and " << fi << " females\n";
  printAllEmp(mAr, fAr, mi, fi);
  return 0;
}

void printAllEmp(const employee mAr[], const employee fAr[], int mi, int fi)
{
  for(int i = 0; i < mi; i++)
    printEmployee(mAr, i);
  for(int i = 0; i < fi; i++)
    printEmployee(fAr, i);

}
void printEmployee(const employee ar[], int x)
{
  employee temp = ar[x];

  cout << left << setw(10) << temp.firstN;
  cout << left << setw(10) << temp.lastN;
  cout << left << setw(10) << temp.gender;
  cout << left << setw(10) << temp.rate;
  cout << left << setw(10) << temp.empId;
  cout << left << setw(10) << temp.age << endl;

}
void readData(employee mAr[], employee fAr[], int &mi, int &fi)
{
  //  int mi = 0;
  //  int fi = 0;

  ifstream emp;
  emp.open("employees.dat");

  if(!emp)
    {  
      cout << "Cannot open input file" << endl;
      exit(1);
    }
  else
    {
      employee temp;
      emp >> temp.firstN;
      emp >> temp.lastN;
      emp >> temp.gender;
      emp >> temp.rate;
      emp >> temp.empId;
      emp >> temp.age;

      while(emp && mi < SIZE && fi < SIZE)
	{
	  if(temp.gender == 'F')
	    {
	      fAr[fi++] = temp;
	      emp >> temp.firstN;
	      emp >> temp.lastN;
	      emp >> temp.gender;
	      emp >> temp.rate;
	      emp >> temp.empId;
	      emp >> temp.age;
	    }
	  if(temp.gender == 'M')
	    {
	      mAr[mi++] = temp;
	      emp >> temp.firstN;
	      emp >> temp.lastN;
	      emp >> temp.gender;
	      emp >> temp.rate;
	      emp >> temp.empId;
	      emp >> temp.age;
	    }
	}
    }

    emp.close();
}

