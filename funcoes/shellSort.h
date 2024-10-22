#ifndef SHELLSORT_H_INCLUDED
#define SHELLSORT_H_INCLUDED

void shellSort(vector<int>& vet) {
    int i, j, gap, temp, n = vet.size();
    for (gap = n/2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            temp = vet[i];
            for (j = i; j >= gap && vet[j - gap] > temp; j -= gap) {
                vet[j] = vet[j - gap];
            }
            vet[j] = temp;
        }
    }
}

#endif // SHELLSORT_H_INCLUDED
