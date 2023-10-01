# include <iostream>

using namespace std;

int main(void) {
    

    int tam, soma=1, soma2=0;

        cout << "digite o tamanho" << endl;
        cin >> tam;
   
    for (int i = 1; i <= tam; i++){
      
          cout  << soma  << " " ;
         
            if(i<=tam){
                  soma = soma + soma2;
                  soma2 = soma - soma2;
             }
    }

    return 0;
}