#include <iostream>
using namespace std;
int main() {
    int numero;
    
    cout << "Digite um numero  ";
    cin >> numero;
    
    
    int somaDivisor = 0;
    
   
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            somaDivisor += i;
        }
    }
    
    if (somaDivisor == numero) {
       cout << numero << " E um numero perfeito." << endl;
    } else {
    cout << numero << " Nao e um numero perfeito." << endl;
    }
    
    return 0;
}
