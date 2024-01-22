#include <iostream>
using namespace std;

// Operator Precedence

bool True(string id){
        cout << "True " << id << endl;
        return true;
    }
bool False(string id){
    cout << "False " << id << endl;
    return false;
}

int main(){
    
    bool result;

    result = False("A") || False("B") && False("C");

    cout << result << endl;

    getchar();
    return 0;
}