#ifndef TRAMONTINA_H_INCLUDED
#define TRAMONTINA_H_INCLUDED
#include <vector>

int tramontina(vector<int>& vet, int inicio, int fim){
    int pivo, up, down;
    pivo = inicio + (fim - inicio) / 2;
    up   = fim;
    down = inicio;
    int aux = vet[pivo];

    do{
        while(vet[down]<vet[pivo]){
            down++;
        }
        while(vet[up]>vet[pivo]){
            up--;
        }
        if(up>down){

            swap(vet[up], vet[down]);
            for(int i=0; i<vet.size(); i++){
                if(vet[i]==aux){
                    pivo = i;
                }
            }
        }
    }while(up!=down);
    cout<<"vetor tramontiado: "<<endl;
    for(int i=0; i<vet.size(); i++){
        cout<<vet[i]<<" | ";
    }
    swap(vet[pivo],vet[up]);
    for(int i=0; i< vet.size(); i++){
        if(vet[i]==aux)
            return i;
    }
    //return pivo;
}

#endif // TRAMONTINA_H_INCLUDED
