#ifndef TRAMONTINA_H_INCLUDED
#define TRAMONTINA_H_INCLUDED
#include <vector>

int tramontina(vector<int>& vet, int down, int up) {
    int pivo = vet[up];
    int i = down - 1;

    for (int j = down; j < up; j++) {
        if (vet[j] < pivo) {
            i++;
            swap(vet[i], vet[j]);
        }
    }
    swap(vet[i + 1], vet[up]);
    return i + 1;
}

#endif // TRAMONTINA_H_INCLUDED
