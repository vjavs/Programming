// Copyright (C) 2016 Vinicius Sa
// Author: Vinicius Sa <viniciusjavs@gmail.com>
// Timestamp: 31 Dec 2016

/*
  Program to writes all the Fibonacci numbers that fits in an int
 */

#include "std_lib_facilities.h"

int main()
{
    long a = 1, b = 1;
    cout << "( " << a << " " << b;
    int n;
    while (true) {
	try { n = narrow_cast<int>(a + b); }
	catch (runtime_error& e) { break; }
        cout << " " << n;
        a = b;
        b = n;
    }
    cout << " )" << '\n';
}
