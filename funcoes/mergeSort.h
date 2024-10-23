#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED
#include <vector>
#include "separaMerge.h"

void mergeSort(vector<int>& vet, int esquerda, int direita) {
    if (esquerda < direita) {
        int med = esquerda + (direita - esquerda) / 2;  // Calcula o ponto médio

        // Ordena a primeira e a segunda metade
        mergeSort(vet, esquerda, med);
        mergeSort(vet, med + 1, direita);

        // Junta as duas metades ordenadas
        separaMerge(vet, esquerda, med, direita);
    }
}

#endif // MERGESORT_H_INCLUDED
