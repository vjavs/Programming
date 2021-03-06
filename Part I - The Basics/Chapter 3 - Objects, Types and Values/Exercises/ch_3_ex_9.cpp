//Copyright 2016 Vinicius Sa (viniciusjavs@gmail.com)
//Chapter 3, Exercise 9
/*
 * Program that converts spelled-out numbers into digits
 * Accetable values are: 0-4. Error msg: not a number I know
*/
#include "std_lib_facilities.h"
int main()
{
  cout << "Enter a spelled number:\n";
  string number;
  int digit = -1;
  while (cin >> number) {
    if (number == "zero")
      digit = 0;
    else if (number == "one")
      digit = 1;
    else if (number == "two")
      digit = 2;
    else if (number == "three")
      digit = 3;
    else if (number == "four")
      digit = 4;
    else
      digit = -1;
    if (digit == -1)
      cout << "not a number I know\n";
    else
      cout << digit << '\n';
  }
}
