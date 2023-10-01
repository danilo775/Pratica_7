#include <iostream>

using namespace std;

int main(void)
{
    system("clear");
            int tam = 0 ;
            char letra = '*';
            cout << "Digite o Tamanho " << endl;
            cin >> tam;

            for(int i = 1; i <tam;i++){
                for(int j = 1; j <=tam;j++){
                 cout << letra;
               
                }
                cout << endl;
            }
  cout << endl;
            for(int i = 0; i <tam;i++){
                for(int j = 0; j <=i;j++){
                 cout << letra;
               
                }
                cout << endl;
            }
 cout << endl;

             for(int i = 1; i <=tam;i++){
                for(int j = 1; j <=tam;j++){
                  if (i == 1 || i == tam || j == 1 || j == tam) {
                    cout << "*";
                  } else {
                    cout << " ";
                  }
               
                }
                cout << endl;
            }
    
    return 0;
}