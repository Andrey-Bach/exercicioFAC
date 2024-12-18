#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int L;
    char T;
    double M[12][12], resultado = 0.0;
    
    cin >> L;
    cin >> T;
    
    // Lê todos os 144 valores da matriz M[12][12]
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> M[i][j];;
        }
    }

    // Calcula a soma dos elementos na linha L
    for (int j = 0; j < 12; j++) {
        resultado += M[L][j];
    }
    
    // Se a operação for média, divide a soma pelo número de elementos (12)
    if (T == 'M') {
        resultado /= 12.0;
    }
    
    // Exibe o resultado com 1 casa decimal
    cout << fixed << setprecision(1) << resultado << endl;

    return 0;
}