/*****************************************************                        
James Bertel
CS111
Assignment 3 - software.cpp
10-6-17

This progam will ask the user for the date, the company name, and the quantity they wish to buy. It will then compute the total cost of the purchase.
*****************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

  //variables
  string date; //date
  string coName; //company name
  int quantity; //quantity
  double price; //price before discount
  double discount; //discount
  double total; //total price

  //inputs
  cout << "Enter today's date (mm/dd/yy): ";
  cin >> date;
  cin.ignore(); //ignores the '/n' from the date
  cout << "Enter your company's name: ";
  getline(cin, coName); //takes entire company name, including the '/n'
  cout << "Enter the quantity you would like to purchase: ";
  cin >> quantity;

  //process
  price = quantity * 99.00;

  if(quantity<0) //if a negative number was entered for the quantity
    cout << endl << "Invalid quantity" << endl << endl;
  else if(quantity==0) //if the quantity equals zero
    cout << endl << "Hope you decide to buy our software in the future." << endl << endl;
  else //quantity>0
    {
      {
      if(0<quantity && quantity<10) //1<=quantity<10
	discount = 0; //no discounted price
      else if(10<=quantity && quantity<=19) //10<=quantity<=19
	discount = .2 * price; //discounted price
      else if(20<=quantity && quantity<=49) //20<=quantity<=49
	discount = .3 * price; //discounted price
      else if(50<=quantity && quantity<=99) //50<=quantity<=99
	discount = .4 * price; //discounted price
      else //100<=quantity
	discount = .5 * price;
      }
      total = price - discount; //total price

      cout << endl << "Invoice for " << coName << fixed << setprecision(2) << endl << endl;
      cout << setw(30) << left << "Price before discount" << right << "$" << setw(10) << price << endl;
      cout << setw(30) << left << "Discount" << right << "$" << setw(10) << discount << endl;
      cout << setw(30) << left << "Total Due" << right << "$" << setw(10) << total << endl << endl;
      
    }
  return 0;
}
