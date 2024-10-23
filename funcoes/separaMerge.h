#ifndef SEPARAMERGE_H_INCLUDED
#define SEPARAMERGE_H_INCLUDED
#include <vector>

void separaMerge(vector<int>& vet, int esquerda, int med, int direita) {
    int n1 = med - esquerda + 1;
    int n2 = direita - med;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = vet[esquerda + i];
    for (int j = 0; j < n2; j++)
        R[j] = vet[med + 1 + j];

    int i = 0;
    int j = 0;
    int k = esquerda;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vet[k] = L[i];
            i++;
        } else {
            vet[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        vet[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        vet[k] = R[j];
        j++;
        k++;
    }
}

#endif // SEPARAMERGE_H_INCLUDED
