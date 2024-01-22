#include <iostream>
using namespace std;

// Iterators

int main(){

    for (int i = 1; i <= 10; i++){
        cout << i << endl;
    }

    cout << "======================" << endl;

    for (int i = 10; i >= 1; i--){
        cout << i << endl;
    }

    cout << "======================" << endl;
    
    int arrayOfN[] = {10, 20, 30, 40, 50};

    for (auto array : arrayOfN){
        cout << array << endl;
    }



    getchar();
    return 0;
}