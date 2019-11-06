/******************** myStrCharFunc.h ***********************/

//implement strcpy (dest, source)
void myStrcpy(char dest[], const char source[])
{
  int i;
  for(i = 0; source[i] != '\0'; i++)
    dest[i] = source[i];

  dest[i] = '\0';
}

//implement char toupper(char)
// toUpper(‘a’) returns ‘A’
// toUpper(‘A’) returns ‘A’
char myToUpper(char ch)
{
  int offset = 'A' - 'a';
 
  if(ch >= 'a' && ch <= 'z') //ch == lowercase
    return (char)(ch + offset);
  else //ch == uppercase
    return ch;
}

//implement int starlen(char[])
int myStrlen(const char cstr[])
{
  int i;
  for(i = 0; cstr[i] != '\0'; i++)
    ;

  return i;
}

