/****************************************
James Bertel
CS111
Lab 14-1
11-27-17
****************************************/
#include <iostream>
using namespace std;

enum direct {NORTH, EAST, SOUTH, WEST};

class Car
{
private:
  string make;
  string model;
  int year;
  int mileage;
  direct direction;
  int X;
  int Y;
  
public:
  //prototypes
  Car(string mk, string md, int yr);
  string getMake();
  string getModel();
  void turnRight();
  void turnLeft();
  direct getDirection();
  void goForward(int blk);
  int getX();
  int getY();
  int getMileage();
  string getDir();
};

Car::Car(string mk, string md, int yr)
{
  make = mk;
  model = md;
  year = yr;
  mileage = 0;
  direction = NORTH;
  X = 0;
  Y = 0;

}

string Car::getMake()
{
  return make;
}

string Car::getModel()
{
  return model;
}

int Car::getMileage()
{
  return mileage;
}


void Car::turnRight()
{
  if(direction == WEST)
    direction = NORTH;
  else
    direction = (direct)(direction + 1);
  
}

void Car::turnLeft()
{
  if(direction == NORTH)
    direction = WEST;
  else
    direction = (direct)(direction - 1);
}

direct Car::getDirection()
{
  return direction;
}

void Car::goForward(int blk)
{
  mileage += blk;

  if(direction == NORTH)
    Y += blk;
  else if(direction == SOUTH)
    Y -= blk;
  else if(direction == EAST)
    X += blk;
  else //if direction == WEST
    X -= blk;
}

int Car::getX()
{
  return X;
}

int Car::getY()
{
  return Y;
}

string Car::getDir()
{
  switch(direction)
    {
    case NORTH: return "north";
    case EAST: return "east";
    case SOUTH: return "south";
    case WEST: return "west";
    }
}

int main() //10 & 13A || 20 & 22A 
{
  Car c1("Toyota", "Camry", 2017);
  cout << c1.getMake() << endl;

  c1.turnRight();
  cout << c1.getDirection() << endl;
  c1.turnRight();
  cout << c1.getDirection() << endl;
  c1.turnRight();
  cout << c1.getDirection() << endl;
  c1.turnRight();
  cout << c1.getDirection() << endl;

  c1.goForward(3); //(0, 3)
  cout << "(" << c1.getX() << ", " << c1.getY() << ")" << endl;

  c1.turnRight();
  c1.goForward(5); //(5, 3)
  cout << "(" << c1.getX() << ", " << c1.getY() << ")" << endl;

  c1.turnRight();
  c1.goForward(7); //(5, -4)
  cout << "(" << c1.getX() << ", " << c1.getY() << ")" << endl;

  c1.turnRight();
  c1.goForward(6); //((-1, -4)
  cout << "(" << c1.getX() << ", " << c1.getY() << ")" << endl;

  cout << c1.getMake() << " " << c1.getModel() << " is located at (";
  cout << c1.getX() << ", " << c1.getY() << ") facing " << c1.getDir();
  cout << ". It has " << c1.getMileage() << " miles on it.\n" << endl;

  Car c2("Honda", "Odyssey", 2001);
  
  cout << c2.getMake() << endl;

  c2.turnRight();
  cout << c2.getDirection() << endl;
  c2.turnRight();
  cout << c2.getDirection() << endl;
  c2.turnRight();
  cout << c2.getDirection() << endl;
  c2.turnRight();
  cout << c2.getDirection() << endl;

  c2.goForward(5);
  cout << "(" << c2.getX() << ", " << c2.getY() << ")" << endl;

  c2.turnLeft();
  c2.goForward(1);
  cout << "(" << c2.getX() << ", " << c2.getY() << ")" << endl;

  c2.turnLeft();
  c2.goForward(2);
  cout << "(" << c2.getX() << ", " << c2.getY() << ")" << endl;

  c2.turnLeft();
  c2.goForward(4);
  cout << "(" << c2.getX() << ", " << c2.getY() << ")" << endl;

  c2.turnLeft();
  c2.goForward(10);
  cout << "(" << c2.getX() << ", " << c2.getY() << ")" << endl;

  cout << c2.getMake() << " " << c2.getModel() << " is located at (";
  cout << c2.getX() << ", " << c2.getY() << ") facing " << c2.getDir();
  cout << ". It has " << c2.getMileage() << " miles on it.\n" << endl;


  return 0;
}

