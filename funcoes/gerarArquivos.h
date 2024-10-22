#ifndef GERARARQUIVOS_H_INCLUDED
#define GERARARQUIVOS_H_INCLUDED
#include <cstdlib>
#include <cstdio>
using namespace std;

void geraArquivo(int tamanho){
    FILE *ordenado, *invertido, *aleatorio;
    char nome[255];
    int j, nRand;

    sprintf(nome,"arquivos/Ordenado%d.txt",tamanho/1000);
    ordenado = fopen(nome, "w");
    for(j=0; j<tamanho; j++){
        fprintf(ordenado, "%d\n", j);
    }
    fclose(ordenado);

    sprintf(nome,"arquivos/Invertido%d.txt",tamanho/1000);
    invertido = fopen(nome, "w");
    for(j=tamanho; j>0; j--){
        fprintf(ordenado, "%d\n", j);
    }
    fclose(invertido);

    sprintf(nome,"arquivos/Aleatorio%d.txt",tamanho/1000);
    aleatorio = fopen(nome, "w");
    for(j=0; j<tamanho; j++){
        nRand = rand();
        fprintf(aleatorio, "%d\n", nRand);
    }
    fclose(invertido);

    return;
}

#endif // GERARARQUIVOS_H_INCLUDED
