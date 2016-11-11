#include <iostream>
#include <string.h>

using namespace std;

float incremento();

string descrizione;
float prezzo, perc_incremento;
int n;
int main()
{
    cout<<"inserisci la percentuale di incremento: ";
    cin>>perc_incremento;
    cout<<"inserisci il numero di prodotti: ";
    cin>>n;
    for(int i=n; i>0; i--)
    {
       cout<<"inserisci la descrizione del prodotto: ";
       cin>>descrizione;
       cout<<"inserisci il prezzo del prodotto: ";
       cin>>prezzo;
       cout<<"descrizione: " <<descrizione <<endl;
       cout<<"prezzo: " <<prezzo <<endl;
       cout<<"prezzo incrementato: " <<incremento() <<endl;
    }
    return 0;

}

float incremento()
{
    float pincrementato;
    pincrementato=prezzo+((prezzo*perc_incremento)/100);
    return pincrementato;
}
