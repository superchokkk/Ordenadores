#ifndef BUBLESORT_H_INCLUDED
#define BUBLESORT_H_INCLUDED
#include<vector>
using namespace std;

void bubleSort(vector<int>& vet){

    bool swapped;
    int n = vet.size();

    for (int i = 0; i < n - 1; i++){
        swapped = false;

        for (int j = 0; j < n - i - 1; j++){
            if (vet[j] > vet[j + 1]){
                swap(vet[j], vet[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

#endif // BUBLESORT_H_INCLUDED
