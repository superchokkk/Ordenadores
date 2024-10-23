#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED
#include <vector>
#include "tramontina.h"

void quickSort(vector<int>& vet, int inicio, int fim) {
    if (inicio < fim) {

        int pi = tramontina(vet, inicio, fim);
        quickSort(vet, inicio, pi - 1);
        quickSort(vet, pi + 1, fim);
    }
}

#endif // QUICKSORT_H_INCLUDED
