
#include <iostream>
#include <string.h>
using namespace std;


void stampa3();

string testo;

int main()
{
    cout<<"inserisci la stringa di testo: ";
    cin>>testo;
    stampa3();

    return 0;
}

void stampa3 ()
{
    cout<<testo <<endl;
    cout<<testo <<endl;
    cout<<testo <<endl;
}
