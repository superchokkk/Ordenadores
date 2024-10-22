#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED
#include <vector>
#include "tramontina.h"

void quickSort(vector<int>& vet, int inicio, int fim)
{
    if(inicio < fim){
        //dividir
        int pivo = tramontina(vet, inicio, fim);

        if((fim-inicio)>2){
            //recursiva esquerda
            quickSort(vet, inicio, pivo--);
            //recursiva direita
            quickSort(vet, (pivo+1), fim);
            return;
        }
    }
    return;
}

#endif // QUICKSORT_H_INCLUDED
