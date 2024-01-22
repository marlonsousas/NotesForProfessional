#include <iostream>
#include <cstdio>
using namespace std;

// Bit Manipulation

int main(){
    // Remove Rightmost set bit
    char op1 = 'a';
    int mask = 0xDF;

    printf("a (AND) mask = A\n");
    printf("%c & 0xDF = %c\n", op1, op1, & mask);
    getchar();
    return 0;
}