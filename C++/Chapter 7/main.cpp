#include <iostream>
using namespace std;

// Bit Fields

struct Date
{
    unsigned int Year : 13;
    unsigned int Month: 4;
    unsigned int Day: 5;
};


int main(){
    // Date
    Date d;

    d.Year = 2016;
    d.Month = 7;
    d.Day = 22;

    cout << d.Year << endl << d.Month << endl << d.Day << endl;

    getchar();
    return 0;
}