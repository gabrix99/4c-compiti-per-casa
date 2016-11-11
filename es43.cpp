#include <iostream>
#include <string>

using namespace std;

float percvoti(int nvotanti, int nvoti);

string candidato1, candidato2;
int votanti, voti1, voti2;
int main()
{
    cout<<"inserisci il nome del primo candidato: ";
    cin>>candidato1;
    cout<<"inserisci il numero di voti del primo candidato: ";
    cin>>voti1;
    cout<<"inserisci il nome del secondo candidato: ";
    cin>>candidato2;
    cout<<"inserisci il numero di voti del secondo candidato: ";
    cin>>voti2;
    votanti=voti1+voti2;


    if(percvoti(votanti, voti1)>percvoti(votanti, voti2))
    {
        cout<<candidato1 <<endl;
        cout<<candidato2 <<endl;
    }
    else
    {
      if(percvoti(votanti, voti1)<percvoti(votanti, voti2))
      {
           cout<<candidato2 <<endl;
           cout<<candidato1 <<endl;
      }
      else cout<<"pareggio";



    }
    return 0;
}

float percvoti(int nvotanti, int nvoti)
{
    float percvoti;
    percvoti=(nvoti*100)/nvotanti;
    return percvoti;
}























