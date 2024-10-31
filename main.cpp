#include <iostream>
using namespace std;

int main() {
    int i, negativi, p;
    float numero, min, max, somma, media;

    //Inizializazione variabili
    somma=0;
    i=1;
    negativi=0;
    p=0;,

    //Inserimento numeri
    do
    {
        cout>>"Inserire un numero"<<endl;
        cin>>numero;

        if (numero>=0)
        {
            somma=somma+numero;
            p=p+1
        }

        if (numero<0)
        {
            negativi=negativi+1;
        }

        if (i==1) 
        {
            max=numero;
            min=numero;
        }
        else
        {
            if (numero>max)
            {
                max=numero;
            }

            if (numero<min)
            {
                min=numero;
            }
        }

        i=i+1;
    }
    while (numero!=0)

    media=somma/p;

    cout<<"Massimo: "<<max<<ednl;
    cout<<"Minimo: "<<min<<endl;

    cout<<"Media numeri positivi: "<<media<<endl;
    cout<<"Numeri negativi: "<<negativi<<endl;
}