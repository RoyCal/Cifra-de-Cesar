#include "CifraDeCesar.h"
#include <iostream>

using namespace std;

int main(){
    int key, escolha, j;
    string text;

    CifraDeCesar crypto;

    j = 1;
    while(j){
        cout << "Deseja criptografar(1), descriptografar(2) ou sair(0)?" << endl;

        cin >> escolha;
        
        switch(escolha){ 
            case 1: //encrypt
                system("cls");

                cout << "Valor da chave: ";
                cin >> key;
                getchar();
                
                cout << "Texto a ser criptografado: ";
                getline(cin, text);

                crypto = CifraDeCesar(text, key);

                crypto.encrypt();

                cout << crypto.getOutput() << endl;
                cout << "\n";

                break;
            case 2: //decrypt
                system("cls");

                cout << "Valor da chave usada no encriptamento: ";
                cin >> key;
                getchar();
                
                cout << "Texto a ser descriptografado: ";
                getline(cin, text);

                crypto = CifraDeCesar(text, key);

                crypto.decrypt();

                cout << crypto.getOutput() << endl;
                cout << "\n";

                break;
            case 0: //sair do programa
                j = 0;
                break;
            default:
                system("cls");
        }
    }

    return 0;
}