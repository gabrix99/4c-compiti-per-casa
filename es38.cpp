#include <iostream>

using namespace std;

float psconto();

float pvendita, persconto;

int main ()
{
    cout<<"inserire il prezzo di vendita: ";
    cin>> pvendita;
    cout<<"inserire la percentuale di sconto: ";
    cin>> persconto;
    cout<<"il prezzo scontato e: " <<psconto() <<" euro";


    return 0;
}

float psconto()
{
    float pscontato;
    pscontato=pvendita-(pvendita*persconto)/100;

    return pscontato;
}
