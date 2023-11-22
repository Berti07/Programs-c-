#include <iostream>

using namespace std;

double velocita (double diametro, double giri){

    double risultato = 3.1416 * diametro * giri * 6;
    risultato=risultato*60/1000;
    return risultato;
}

int main(){

    //modo 1
    double ris=velocita(5, 9);
    cout<<"il risultato e': "<<ris<<endl;

    //modo 2
    cout<<"il risultato e': "<<velocita(5,9)<<" km/h"<<endl;

    return 0;

}