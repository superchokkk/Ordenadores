#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED
#include <vector>

void selectionSort(vector<int>& vet){
    int tamanho = vet.size();
    int ancora, j;
    for(int i = 0; i < tamanho - 1; i++) {
        ancora = i;
        for(j = i + 1; j < tamanho; j++) {
            if(vet[j] < vet[ancora]) {
                ancora = j;
            }
        }
        if(ancora != i) {
            swap(vet[i], vet[ancora]);
        }
    }
}

#endif // SELECTIONSORT_H_INCLUDED
