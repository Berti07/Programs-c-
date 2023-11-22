/*Realizzare un gioco "Indovina un numero" in cui il computer genera un numero casuale compreso tra 0 ..N.
https://cplusplus.com/reference/cstdlib/rand/. L'utente deve indovinare il numero inserendolo da tastiera e il programma deve stampare "Troppo piccolo" oppure "Troppo grande" fino ad indovinarlo.
Stampare il numero di tentativi fatti oppure decidere un numero massimo di tentativi che l'utente ha a disposizione.*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    int val, cont;
    int NSegreto, Nindovina, numero=0;à
    srand(time(NULL));
    Nsegreto=rand()%100+1;

    do{
        cout<<"Indovina un numero da 1 a 100"<<endl;
        cin>>Nindovina
        if(NSegreto>NIndovina){
            cout<<"Il numero segreto e' troppo basso"<<endl;

        }

        else if(NSegreto<Nindovina){
            cout<<"Il numero segreto e' troppo alto"<<endl;
        }
        numero++;
    }
    while(NSegreto!=NIndovina);
    cout<<"Hai fatto"<<numero"tentativi"<<endl;
    cout<<"Congratulazioni!"<<endl;
    return 0;
}