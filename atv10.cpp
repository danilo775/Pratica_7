#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numero, original, resultado = 0, n = 0;
    
    cout << "Digite um numero  ";
    cin >> numero;
    
    original = numero; 
    
  
    while (original > 0) {
        original /= 10;
        n++;
    }
    
    original = numero; 
    
 
    while (original > 0) {

         if (original == 1)
        {
            resultado = resultado + 1;
        }
        int digito = original % 10;
        resultado += pow(digito, n); // Pow calcula a potencia --da bibliotea cmath
        original /= 10;
    }
    
    
    if (resultado == numero) {
        cout << numero << " E um Numero de Armstrong" << endl;
    } else {
        cout << numero << " Nao e um Numero de Armstrong" << endl;
    }
    
    return 0;
}
