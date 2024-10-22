#include <iostream>
#include <cstdio>
#include "links.h"

using namespace std;

int main()
{
    int respMenu;

    do{
        cout<<"1 - buble sort"<<endl;
        cout<<"2 - insert sort"<<endl;
        cout<<"3 - selection sort"<<endl;
        cout<<"4 - shell sort"<<endl;
        cout<<"5 - quick sort"<<endl;
        cout<<"6 - merge sort"<<endl;
        cout<<"0 - sair"<<endl;
        cout<<"9 - gerar arquivos"<<endl;
        cin>>respMenu;
        switch(respMenu){
        case 1:
            cout<<"tamanho: ";
            cin>>respMenu;
            chamaBB(respMenu);
            cout<<respMenu<<" feito :)"<<endl;
            break;
        case 2:
            cout<<"tamanho: ";
            cin>>respMenu;
            chamaIS(respMenu);
            cout<<respMenu<<"feito"<<endl;
            break;

        case 3:
            cout<<"tamanho: ";
            cin>>respMenu;
            chamaSellect(respMenu);
            cout<<respMenu<<" feito :)"<<endl;
            break;

        case 4:
            cout<<"tamanho: ";
            cin>>respMenu;
            chamaShell(respMenu);
            cout<<respMenu<<" feito :)"<<endl;
            break;

        case 5:
            cout<<"tamanho: ";
            cin>>respMenu;
            chamaQuick(respMenu);
            cout<<respMenu<<" feito :)"<<endl;
            break;

        case 9:
            cout<<"tamanho: ";
            cin>>respMenu;
            geraArquivo(respMenu);
            cout<<"arquivos gerados"<<endl;
            break;
        }
    }while(respMenu != 0);
    return 0;
}
