#include <iostream>
#include "libs/sales_data.hpp"
using namespace std;

// Variables and basic types


int main()
{
    int sum = 0;

    Sales_data data1;
    // sum values from 1 through 10 inclusive
    for (int val = 1; val <= 10; ++val)
    sum += val; // equivalent to sum = sum + val
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    int ival = 42;
    int *p = &ival;

    cout << *p << endl;

    cout << data1.bookNo << endl;

    data1.bookNo = "44";

    cout << data1.bookNo << endl;

    return 0;
}