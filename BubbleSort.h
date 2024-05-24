#ifndef BUBBLESORT_H_INCLUDED
#define BUBBLESORT_H_INCLUDED

void scambio(int &x, int &y){
    int t;  //variabile temporanea che serve come appoggio per effettuare lo scambio
    t=x;
    x=y;
    y=t;
}

void BubbleSort(int vet[], int N){          //procedura per l'ordinamento midiante algoritmo di ordinamento Bubble Sort
    bool s;     //variabile di controllo
    do{         //fino a quando viene effettuato uno scambio 
        for(int i=0; i<(N-1); i++){
            s=false;
            if(vet[i]>vet[i+1]){        //confornto coppia elementi
                scambio(vet[i],vet[i+1]);  //invoco la funzione
                s=true;
            }
        }
    }while(s==true);        // oppure while(s);  sottindende che s devve essre = a true

} 
#endif  // BUBBLESORT_H_INCLUDED