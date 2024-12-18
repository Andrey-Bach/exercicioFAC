#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int N;

    while (cin >> N && N != 0) {
        int M[15][15];

        // Construção da matriz conforme o padrão
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                M[i][j] = pow(2, i + j);
            }
        }

        // Calcula o número de dígitos do maior número da matriz
        int maxNum = M[N-1][N-1];
        int T = log10(maxNum) + 1;

        // Impressão da matriz com formatação adequada
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                // Imprime cada número com o espaçamento adequado
                cout << setw(T) << M[i][j];
                if (j < N - 1) cout << " ";  // Espaço entre os números na mesma linha
            }
            cout << endl;  // Quebra de linha após cada linha da matriz
        }
        cout << endl;  // Linha em branco após cada matriz
    }

    return 0;
}
