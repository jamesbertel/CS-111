/********** Welcome to myMath.h!****************

Functions in myMath.h:

int     pow(int b, int e);
double  fabs(double num);
double  round(double num);
bool    isPrime(int num);
double  sqrt(int num);

/****************************
b is base
e is exponent
This function will return the answer of b^e
***************************/
int pow(int b, int e)
{
  int ans = 1;

  for(int i = 1; i <= e; i++)
    ans *= b;

  return ans;
}

/****************************
num = number entered by user
This function will find the absolute value of a number.
****************************/
double fabs(double num)
{
  if(num<0)
    num *= -1;

  return num;
}

/****************************
num = number entered by user 
This function will round a number to the nearest integer 
****************************/
double round(double num)
{
  int rNum;
  if(num<0)
    rNum = num - 0.5;
  else //num >= 0
    rNum = num + 0.5;

  return rNum;
}

/***************************
num is a positive integer
This function will tell if the integer number is prime or not
***************************/
bool isPrime(int num)
{

  for(int i = 2; i < num; i++)
    {
      if(num % i == 0)
	return false;
    }
  return true;
}

/***********************
num == number inputed by user
This function will return the square root of num.
***********************/
double sqrt(int num)
{
  int start; //starting number
  double root; //actual square root
  int bottom, top; //finds perfect squares around 'num'
  
  //finds bottom and top perfect squares 'num' lies between
  for(int i = 0; i * i < num; i++)
    {
      bottom = i;
      top = i + 1;
    }

  if(num - bottom*bottom <= top*top - num) //if the square of the bottom number is closer to 'num' than the square of the top                                                                               
    start = bottom;
  else //if the square of the top number is closer to 'num' than the square of the bottom
    start = top;

  for(double var, L=start, r=1; r <= 10; r++) //finds the square root
    {
     var = (num/L);
      root = (var+L) / 2;
      L = root;
    }

  return root;
}


/***********************


***********************/
/*
{

  return;
}

/***********************


***********************/
/*
{

  return;
}

/***********************


***********************/
/*
{

  return;
}

/***********************


***********************/
