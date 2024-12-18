#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    //Se N for 5, a linha vector<int> X(N); criará um vetor X com 5 elementos, todos inicialmente com valor 0:
    //Agora, X pode armazenar e acessar 5 valores inteiros distintos.
    vector<int> x(N);

    // Lê os valores do vetor X
    for (int i=0; i<N; i++){
        cin >> x[i];
    }

    // Lê os valores do vetor X
    int menor_valor = x[0];
    int posicao = 0;

    // Encontra o menor valor e sua posição
    for (int i=0; i<N; i++){
        if (x[i] < menor_valor){
            menor_valor = x[i];
            posicao = i;
        }
    }

    cout <<"Menor valor: " << menor_valor <<endl;
    cout <<"posicao: " << posicao <<endl;
    

    return 0;
}