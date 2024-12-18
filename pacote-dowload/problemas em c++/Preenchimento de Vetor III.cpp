#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double N[100]; //cria lista com 100 posições 
    double x; //x vai armazenar um numero
    cin >> x; //que numero vai ser esse ?

    for (int i=0; i<100; i++){ // Este loop itera de 0 a 99, preenchendo cada posição do array N
        N[i] = x; // atribiu o valor de x na indice atual, exemplo indice 0 x vale 5 , no indice 2 o x vai valer 2.5
        x /= 2.0; // o numero que esta atribuido a x vai ser dividido por 2
    }
    
    cout << fixed << setprecision(4);

    for (int i=0; i<100; i++){ // Este loop itera de 0 a 99, imprimindo cada posição do array N
        cout << "N["<<i<<"] = " << N[i] << endl; // Imprime o índice i e o valor armazenado em N[i] com 4 casas decimais
    }


    return 0;
}