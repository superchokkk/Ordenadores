#ifndef INSERTSORT_H_INCLUDED
#define INSERTSORT_H_INCLUDED

void insertSort(vector<int>& vet) {
    int n = vet.size();
    for (int i = 1; i < n; i++) {
        int key = vet[i];
        int j = i - 1;

        while (j >= 0 && vet[j] > key) {
            vet[j + 1] = vet[j];
            j = j - 1;
        }
        vet[j + 1] = key;
    }
}

#endif // INSERTSORT_H_INCLUDED
