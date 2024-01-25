#include <iostream>
#include <vector>
using std::cin;
using std::cout; using std::endl;
using std::vector;
// Namespace using Declarations

int main(){
    vector<std::string> nomes;
    std::string nome;

    cout << "Cadastrar Pessoa (exit p/ sair)" << endl;
    while (true){
        
        cout << "Nome: ";
        cin >> nome;

        if (nome == "sair"){
            break;
        }

        nomes.push_back(nome);
    }

    cout << "Nomes Cadastrados: " << endl;
    for (auto& nome : nomes){
        
        cout << nome << endl;
    }

    const char ca[] = {'h', 'e'};
    const char *cp = ca;
    while (*cp){
        cout << cp << endl;
    }

    // Multidimensional Array

    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    


    return 0;
}