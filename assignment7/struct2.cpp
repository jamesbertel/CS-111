/****************************************
James Bertel
CS111
assignment 7 - struct.cpp Part 2
11/29/2017

This program offers a variety of functions
for a list of employees.
****************************************/
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;

struct employee //struct of each employee
{
  string firstN;
  string lastN;
  char gender;
  double rate;
  int empId;
  int age;
};
const int SIZE = 100;

//part 1 prototypes
void readData(employee mAr[], employee fAr[], int &mi, int &fi);
void printAllEmp(const employee ar[], int x);
void printEmployee(employee temp);
void outfileArray(const employee a[], int x);
employee findOldest(const employee m[], const employee f[], int mi, int fi);
void giveRaise(double percent, employee e[], int x);
void giveRaiseToOneEmployee(double percent, employee &emp);
//part 2 prototypes
void combineArray(const employee m[], int mi, const employee f[], int fi, employee all[]);
void findEmp(const employee ar[], int s);
void sortEmployees(employee ar[], int s);

int main()
{
  employee mAr[SIZE]; //male employees struct
  employee fAr[SIZE]; //female employees struct

  cout << fixed << setprecision(2);
  //cout << "\n-------------------- readData() --------------------\n";
  int mi = 0; //number of male employees
  int fi = 0; //number of female employees

  readData(mAr, fAr, mi, fi);
  /*
  cout << "There are " << mi << " male and " << fi << " female employees.\n";

  cout << "\n-------------------- printEmployee() ---------------\n";
  printEmployee(fAr[0]); //prints one female employee

  cout << "\n-------------------- printEmployee() ---------------\n";
  printEmployee(mAr[0]); //prints one male employee
  
  cout << "\n-------------------- printAllEmp() -----------------\n";
  printAllEmp(mAr, mi); //prints all male employees

  cout << "\n-------------------- printAllEmp() -----------------\n";
  printAllEmp(fAr, fi); //prints all female employees

  cout << "\n-------------------- outfileArray() ----------------\n";
  outfileArray(mAr, mi); //outfiles all male employees

  cout << "\n-------------------- outfileArray() ----------------\n";
  outfileArray(fAr, fi); //outfiles all male employees

  cout << "\n-------------------- findOldest() ------------------\n";
  employee oldest =  findOldest(mAr, fAr, mi, fi); //oldest employee
  cout << endl << oldest.firstN << endl << endl; //outputs first name of oldest employee

  cout << "\n-------------------- giveRaise() -------------------\n";
  */
  giveRaise(5.5, fAr, fi); //gives 5.5% raise to all female employees
  //printAllEmp(fAr, fi); //prints all female employees
  
  //cout << "\n-------------------- giveRaise() -------------------\n";
  giveRaise(5.0, mAr, mi); //gives 5% raise to all male employees
  //printAllEmp(mAr, mi); //prints all male employees

  //cout << "\n-------------------- giveRaiseToOneEmployee() ------\n";
  giveRaiseToOneEmployee(2.0, fAr[1]); //gives raise to second female employee
  //printEmployee(fAr[1]); //prints second female employee

  //cout << "\n-------------------- giveRaiseToOneEmployee() ------\n";
  giveRaiseToOneEmployee(50.0, mAr[0]); //gives 50% raise to first male employee
  //printEmployee(mAr[1]); //prints first male employee

  cout << "\n-------------------- combineArray() ----------------\n";
  employee allEmp[SIZE*2]; //struct array for all employees
  combineArray(mAr, mi, fAr, fi, allEmp);

  int total = mi + fi; //total number of employees
  printAllEmp(allEmp, total);

  cout << "\n-------------------- findEmp() ---------------------\n";  
  findEmp(allEmp, total); //finds one employee
  findEmp(allEmp, total); //finds one employee

  cout << "\n-------------------- sortEmployees() ---------------\n";
  sortEmployees(allEmp, total); //sorts all employees
  printAllEmp(allEmp, total); //prints sorted employees

  cout << endl;
  return 0;
}


//***************Part 2 functions***************


/***********
m[] = male employees struct
m = number of male employees
f[] = female employees struct
fi = number of female employees
all[] = array for all employees
This function will combine the male and female arrays into one array.
***********/
void combineArray(const employee m[], int mi, const employee f[], int fi, employee all[])
{
  for(int i = 0; i < mi; i++)
    all[i] = m[i];
  for(int i = 0; i < fi; i++)
    all[i+mi] = f[i];
}

/***********
ar[] = employee array
s = size of array
This function will find an employee with a particular ID
***********/
void findEmp(const employee ar[], int s)
{
  int id; //employee ID number

  cout << "\nEnter the employee id: ";
  cin >> id;

   bool found = false; //id not found yet
  int i;
  for(i = 0; i < s && found == false; i++) //goes thru employees
    {
      if(ar[i].empId == id)
        {
          found = true; //id found
          i--;
        }
    }
  if(found == true) //if ID is found
    {
      cout << endl;
      cout << left << setw(10) << ar[i].firstN;
      cout << left << setw(10) << ar[i].lastN << endl;
    }
  else //found == false
    cout << "\nThere is no employee with ID " << id << ".\n";
}

/***********
ar[] = array of employees
s = number of employees
This function will sort the employees by first name in alphabetical order.
***********/
void sortEmployees(employee ar[], int s)
{
  int first; //first name in the alphabet (index)
  employee temp; //temporary employee struct

  for(int last = s-1; last >= 1; last--)
    {
      first = 0;

      for(int i = 1; i <= last; i++)
        {
          //if ar[i] comes before ar[first] in the dictionary
          if(ar[i].firstN > ar[first].firstN)
            first = i;
        }

      temp = ar[first];
      ar[first] = ar[last];
      ar[last] = temp;
    }
}


//***************Part 1 functions***************


/************
mAr[] = male employees struct
fAr[] = female employees struct
mi = number of male employees
fi = number of female employees
This function finds the number of male and female employees
************/
void readData(employee mAr[], employee fAr[], int &mi, int &fi)
{
  ifstream emp;
  emp.open("employees.dat"); //opens list of employees

  if(!emp) //if employees.dat does not exist
    {
      cout << "Cannot open input file" << endl;
      exit(1); //closes program
    }
  else //if employees.dat does not exist
    {
      employee temp; //creates temporary employee structure
      emp >> temp.firstN;
      emp >> temp.lastN;
      emp >> temp.gender;
      emp >> temp.rate;
      emp >> temp.empId;
      emp >> temp.age;

      //while there are still employees left to use
      while(emp && mi < SIZE && fi < SIZE)
        {
	  if(temp.gender == 'F')
	    fAr[fi++] = temp;
	  else if(temp.gender == 'M')
	    mAr[mi++] = temp;

	  emp >> temp.firstN;
	  emp >> temp.lastN;
	  emp >> temp.gender;
	  emp >> temp.rate;
	  emp >> temp.empId;
	  emp >> temp.age;  
        }
    }

  emp.close(); //closes file list of employees
}

/***********
ar[] = employees
x = number of employees
This function prints all employees in the structs
***********/
void printAllEmp(const employee ar[], int x)
{
  cout << endl;

  for(int i = 0; i < x; i++) //prints each employee
    printEmployee(ar[i]);
}

/***********
ar[] = employees struct
x = employee to be printed (sent from printAllEmp)
This function prints one employee.
***********/
void printEmployee(employee temp)
{
  cout << left << setw(10) << temp.firstN;
  cout << left << setw(10) << temp.lastN;
  cout << left << setw(10) << temp.gender;
  cout << left << setw(10) << temp.rate;
  cout << left << setw(10) << temp.empId;
  cout << left << setw(10) << temp.age << endl;
}

/***********
a[] = employees
x = number of employees
This function will output the first and last names
of all the employees from the array to the output file
***********/
void outfileArray(const employee a[], int x)
{
  string filename; //name of output file

  cout << "Enter the output file name: ";
  cin >> filename;

  //opens outfile for employees
  ofstream fout; 
  fout.open(filename.c_str());

  //outfiles each employee
  for(int i = 0; i < x; i++)
    {
      employee tempo = a[i];
      fout << tempo.lastN << ", " << tempo.firstN << endl;
    }
 
  fout.close(); //closes name file
}

/***********
m[] = all male employees
f[] = all female employees
mi = number of male employees
fi = number of female employees
This function will find t he oldest employee in the array
and return the whole struct to the caller
***********/
employee findOldest(const employee m[], const employee f[], int mi, int fi)
{
  employee old = m[0]; //starts of oldest with first male employee

  //checks to which male employee is the oldest
  for(int i = 1; i < mi; i++)
    {
      employee temp = m[i];
      if(temp.age > old.age)
	old = temp;
    }

  //checks to see which employee is the oldest
  for(int i = 0; i < fi; i++)
    {
      employee temp = f[i];
      if(temp.age > old.age)
	old = temp;
    }

  return old;//return the whole struct of the oldest employee
}

/***********
percent = raise percentage
a[] = array (male or female)
x = number of people in the array
This function will give a raise to all employees.
***********/
void giveRaise(double percent, employee e[], int x)
{
  for(int i = 0; i < x; i++)
    e[i].rate = e[i].rate + (e[i].rate * (percent * .01));
}

/***********
percent = percentage of raise
emp = employee
This function will give a raise to one employee.
***********/
void giveRaiseToOneEmployee(double percent, employee &emp)
{
  emp.rate = emp.rate + (emp.rate * (percent * .01));
}
