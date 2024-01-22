#include <iostream>
using namespace std;

// Bit Operators

int main(){

    // OR
    int a = 5;
    int b = 12;
    int c = a | b;

    cout << c << endl;

    // XOR
    a = 5;
    b = 12;
    c = a ^ b;

    cout << c << endl;

    // XOR Swap
    a = 42;
    b = 64;

    a ^= b;
    b ^= a;
    a ^= b;

    cout << a << " " << b << endl;

    // AND
    a = 6;
    b = 10;
    c = a & b;

    cout << c << endl;

    // Left Shift
    a = 1;
    b = a << 1;

    cout << b << endl;

    // Right Shift
    a = 2;
    b = a >> 1;

    cout << b << endl;

    
    

    getchar();
    return 0;
}