#include <iostream>

using namespace std;

int main(void)
{
    system("clear");
            int tam = 0 ;
            char letra = 'A';
            cout << "Digite o Tamanho " << endl;
            cin >> tam;

            for(int i = 0; i <tam;i++){
                for(int j = 0; j <=i;j++){
                 cout << letra;
                 letra++;
                }
                cout << endl;
            }

    
    return 0;
}