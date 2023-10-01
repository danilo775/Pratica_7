#include <iostream>
#include <iomanip>
/*Escreva um programa em C++ que leia um número inteiro e imprima todos
os divisores desse número.*/
int main() {
   using namespace std;

    int numero ; 
    cout << "digite o numero inteiro" << endl;
    cin >> numero;
    
    cout << numero << " E divisivel por : " << endl;
        
    for (int i = 1; i <= numero; ++i) {
       
        if(numero%i==0){
            cout << i << " - ";
        }
        



    }  
 
    return 0;
}