/****************************************
James Bertel
CS111
Lab 12-1
11/6/17
****************************************/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
  //  cout << left << setw(10) << "Model Name" << right << setw(20) << "Miles Driven";
  //cout << setw(30) << "Gallons of Gas Used" << setw(10) << "MPG" << endl;

  ifstream fin;
  ofstream fout;

  string model;
  int miles;
  int gas;
  double totalM = 0;
  double totalG = 0;

  fin.open("car.dat");

  if(!fin)
    fout << "No cars were in the input file" << endl;
  else
    {
      fout.open("carout.dat");

      fout << left << setw(10) << "Model Name" << right << setw(20) << "Miles Driven";
      fout << setw(30) << "Gallons of Gas Used" << setw(10) << "MPG" << endl;

      fin >> model;
      fin >> miles;
      fin >> gas;

      while(fin)
	{
	  fout << left << setw(10) << model << right << setw(20) << miles;
	  fout << setw(30) << gas << fixed << setprecision(2) << setw(10) << (double)miles/gas << endl;
	  totalM += miles;
	  totalG +=gas;
	  fin >> model;
	  fin >> miles;
	  fin >> gas;
	}
 
      fout << "\nTotal Miles Driven: " << (int)totalM << endl;
      fout << "Total Gallons of Gas Used: " << (int)totalG << " gallons" << endl;
      fout << "Average MPG: " << totalM/totalG << " miles per gallon\n" << endl;

      fin.close();
      fout.close();
    }

  return 0;
}
