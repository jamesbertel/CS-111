/****************************************
James Bertel
CS111
assignment 5 - mailOrder.cpp
10-27-17

This program will print a receipt for a mail order based on where the order is being taken from, what month it's being ordered in, ahd how heavy the package is.
****************************************/
#include <iostream>
#include <iomanip>
using namespace std;

void getCustomerInfo(int&acct, int&month, int&day, int&year, char&county);
void getItemsInfo(double &tPrice, int &tWeight);
double calcDiscount(int month, double price);
double calcSalesTax(char county, double tPrice);
double calcShipping(int weight);
void outputInvoice(int acct, char county, int month, int day, int year, double price, double discount, double tax, double shipping, double tPrice);

int main()
{
  int account; //account number
  int month; //month of sale
  int day; //day of sale
  int year; //year of sale
  char county; //county code
  double tPrice; //total price of items
  int tWeight; //total weight of items
  
  getCustomerInfo(account, month, day, year, county); //gets information from customer
  getItemsInfo(tPrice, tWeight); //finds total price and weight of items
  double discount = calcDiscount(month, tPrice); //finds the discount of items and the discounted price
  
  double dPrice = tPrice - discount; //total discounted price
  
  double salesTax = calcSalesTax(county, dPrice); //finds sales tax of discounted price 
  double shipping = calcShipping(tWeight); //finds shipping cost
  outputInvoice(account, county, month, day, year, tPrice, discount, salesTax, shipping, dPrice); //outputs receipt

  return 0;
}

/******************************************
acct == account #
month == month of purchase
day == day of purchase
year == year of purchase
county == county code
This function will get the account number, date of sale, and county code from the user
******************************************/
void getCustomerInfo(int&acct, int&month, int&day, int&year, char&county)
{
  cout << "Enter account number: ";
  cin >> acct;
  cout << "Enter month number: ";
  cin >> month;
  cout << "Enter day of the month: ";
  cin >> day;
  cout << "Enter year: ";
  cin >> year;
  cout << "Enter County (S, O, or L): ";
  cin >> county;
}

/****************************************** 
tPrice == total price
tWeight == total weight
This functions reads the prices and the weights of the item the customer is ordering, and finds the total sale amount and weights.
******************************************/
void getItemsInfo(double &tPrice, int &tWeight)
{

  char choice; //user's choice of whether or not they would like to purchase another item
  tPrice=0;
  tWeight=0;

  cout << "\nDo you want to order an item? Enter Y or N: ";
  cin >> choice; 

  while(choice=='Y'||choice=='y')
    {
      double price; //price of an item
      int weight; //weight of an item

      cout << "Enter a price: ";
      cin >> price;
      cout << "Enter a weight: ";
      cin >> weight;

      tPrice += price; //finds total price
      tWeight += weight; //finds total weight

      cout << "\nDo you want to order another item? Enter Y or N: ";
      cin >> choice;
    }

}

/******************************************
month == month of sale
price == total price
This function finds the discount of the sale before tax
******************************************/
double calcDiscount(int month, double price)
{
  double discount; //discount of sale

  switch(month)
    {
    case 6:
    case 7:
    case 8: discount = .10; //months 6-8 (Jun-Aug)
      break;
    case 9:
    case 10: 
    case 11: 
    case 12: discount = .15; //months 9-12 (Sep-Dec)
      break;
    default: discount = .05; //months 1-5 (Jan-May)
    }

  return discount *= price; //returns the discount of the price
}

/******************************************
county == county purchased from
price == total discounted price
This function finds the tax rate based on what county the customer is in.
******************************************/
double calcSalesTax(char county, double price)
{
  double sTax;

  if(county=='S'||county=='s') //if in San Diego County
    sTax = .0775;
  else if(county=='O'||county=='o') //if in Orange County
    sTax = .0775;
  else if(county=='L'||county=='l') //if in LA County
    sTax = .0825;

  sTax *= price;
  return sTax;
}

/******************************************
weight = total weight of all purchases
This function finds the total shipping for all purchases based on their total weight.
******************************************/
double calcShipping(int weight)
{
  double shipping; //total shipping

  if(weight <= 25) 
    shipping = 5.00; //normal shipping of $5
  else if(weight >= 26 && weight <= 50)
    shipping = 5 + (weight-25)*.10; //normal shipping, plus 10 cents per extra pound
  else //weight > 50
    shipping = 5 + (weight-50)*.07 + 25*.10; //normal shipping above, plus 7 cents per extra pound

  return shipping;
}
/******************************************
acct == account #
county == county code
month == month of purchase
day == day of purchase
year == year of purchase
price == price of items before discount and tax
discount == discount of price
sTax == tax of discounted price
shipping == total shipping of items
tPrice == total price plus tax and shipping
This function outputs the final receit of the order
******************************************/
void outputInvoice(int acct, char county, int month, int day, int year, double price, double discount, double sTax, double shipping, double tPrice)
{
  string sCounty; //county in string form

  if(county=='S'||county=='s') //if SD county
    sCounty = "San Diego";
  else if(county=='O'||county=='o') //if Orange County
    sCounty = "Orange";
  else if(county=='L'||county=='l') //if in LA County
    sCounty = "Los Angeles";

  cout << fixed << setprecision(2) << endl;
  cout << left << setw(35) << "ACCOUNT NUMBER" << right << "COUNTY\n";
  cout << left << setw(35) << acct << right << sCounty << endl << endl;
  cout << "DATE OF SALE " << month << "/" << day << "/" << year << endl << endl;
  cout << left << setw(20) << "TOTAL SALE AMOUNT:" << right << "$" << setw(10) << price << endl;
  cout << left << setw(20) << "DISCOUNT:" << right << "$" << setw(10) << discount << endl;
  cout << left << setw(20) << "SALEX TAX:" << right << "$" << setw(10) << sTax << endl;
  cout << left << setw(20) << "SHIPPING:" << right << "$" << setw(10) << shipping << endl;
  cout << left << setw(20) << "TOTAL DUE:" << right << "$" << setw(10) << tPrice+sTax+shipping << endl << endl;
}
