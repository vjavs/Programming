//Copyright 2016 Vinicius Sa (viniciusjavs@gmail.com)
//Chapter 3, Exercise 8
/*
 * Program to test that a number is odd or even
*/
#include "std_lib_facilities.h"
int main()
{
  cout << "Enter a integer number :\n";
  int num;
  while (cin >> num) {
    if (num % 2 == 0)
      cout << "The number " << num << " is odd\n";
    else
      cout << "The number " << num << " is even\n";
  }
}