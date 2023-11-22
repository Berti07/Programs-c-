// letti n numeri da tastiera e un valore K, contare quanti valori sono maggiori di K
/*
dati di input: k,n,val
dati output k, c>0
vincoli intergrità: i numeri devono essere maggiori di 0 */
#include <iostream>

using namespace std;

int main(){
    int c, k, n, val;
    c=0;

    cout<<"inserisci un numero: ";
    cin>>k;
    
    cout<<"inserisci n valori inseriti: ";
    cin>>n; 

    while (n<1){
        cout<<"errore, reinserire n valori " ;
        cin>>n;
    }

    cout<<"inserisci valori: "<<endl;

    while (n>0){

        cin>>val;

        if(val>k){
            c++;
        }
        n--;

    }

    cout<<"I numeri maggiori di"<<k<<":"<<c<<endl;
    return 0;
}
