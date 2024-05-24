#include <iostream>
#include "BubbleSort.h"

using namespace std;

const int MAX=100;  //dimensione max del vettore

int main (){
    int v[MAX], dim;
    do{
        cout<<"Inserisci la dimensione del vettore (compresa tra 1 escluso e 100 incluso): "<<endl;
        cin>>dim;
    }while(dim<=1 || dim>100);

    cout<<endl;
    
    for(int i=0; i<dim; i++){
        cout<<"inserisci l'elemento "<<i+1<<": "<<endl;
        cin>> v[i];
    }

    BubbleSort(v,dim);

    cout<<endl;

    cout<<"Vettore ordinato!"<<endl;
    for(int i=0; i<dim; i++){
        cout<<"v[ "<<i+1<<"]: "<<v[i]<<endl;
    }


    return 0; 
}
    