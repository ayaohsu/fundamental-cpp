#include "stdafx.h"
#include "cpp-utilities.h"

#include <iostream>
using namespace std;

void print_out_system_dependent_variable_sizes() {
	cout << "Size of char: " << sizeof(char) << " bytes" << endl;
	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	cout << "Size of short: " << sizeof(short) << " bytes" << endl;
	cout << "Size of float: " << sizeof(float) << " bytes" << endl;
	cout << "Size of double: " << sizeof(double) << " bytes" << endl;
}