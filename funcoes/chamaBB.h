#ifndef CHAMABB_H_INCLUDED
#define CHAMABB_H_INCLUDED
#include <vector>
#include <fstream>
#include <ctime>
#include "../links.h"

void chamaBB(int tamanho){
    int number;
    vector<int> numbers;
    ifstream arquivo;
    char nome[255];
    double tempo;
    clock_t inicio, fim;

    //ordenado
    inicio = clock();
    sprintf(nome,"arquivos/Ordenado%d.txt",tamanho/1000);
    arquivo.open(nome);

    while (arquivo >> number) {
        numbers.push_back(number);
    }
    arquivo.close();
    bubleSort(numbers);
    fim = clock();
    tempo = double(fim - inicio)/CLOCKS_PER_SEC;
    cout<<"tempo de execucao: "<<tempo<<" s"<<endl;
    numbers.clear();

    //aleatorio
    inicio = clock();
    sprintf(nome,"arquivos/Aleatorio%d.txt",tamanho/1000);
    arquivo.open(nome);

    while (arquivo >> number) {
        numbers.push_back(number);
    }
    arquivo.close();
    bubleSort(numbers);
    fim = clock();
    tempo = double(fim - inicio)/CLOCKS_PER_SEC;
    cout<<"tempo de execucao: "<<tempo<<" s"<<endl;
    numbers.clear();

    //invertido
    inicio = clock();
    sprintf(nome,"arquivos/Invertido%d.txt",tamanho/1000);
    arquivo.open(nome);

    while (arquivo >> number) {
        numbers.push_back(number);
    }
    arquivo.close();
    bubleSort(numbers);
    fim = clock();
    tempo = double(fim - inicio)/CLOCKS_PER_SEC;
    cout<<"tempo de execucao: "<<tempo<<" s"<<endl;
    numbers.clear();
}

#endif // CHAMABB_H_INCLUDED
