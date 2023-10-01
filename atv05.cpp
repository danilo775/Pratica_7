#include <iostream>
#include <cstdlib>
#include <ctime>
/*Escreva um programa em C++ que simule um jogo de adivinhação. O
programa deve gerar um número aleatório entre 1 e 100, e o usuário deve
tentar adivinhar esse número. O jogo deve informar se o palpite está alto,
baixo ou correto, e continuar até que o usuário acerte o número.*/

   using namespace std;

           
int main(){
system("clear");  
srand(time(0));
int adv, num = 1+ rand()%100;

        for(int i = 1; i<=10; i++){
            cout << "Digite um numero e adivinhe " << endl;
            cin >> adv;
            if(i == 5){
                cout << "game over, voce perdeu " << "("<< num << ")" << endl;
                break;
            }
            if(num > adv){
                cout << "numero maior " << endl;
            }
            else if(num < adv){
                cout << "numero menor " << endl;
            }
            else if(num == adv){
                cout << "parabens voce ganhou " << "("<< num << ")" << endl;
                break;
            }
            

        }
    


 
    return 0;
}