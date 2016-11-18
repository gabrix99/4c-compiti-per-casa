#include<iostream>

using namespace std;

int numeri[10];

int main()
{
    int i;
    for(i=0; i<10; i++)
    {
        cout<<"inserisci il valore n " <<(i+1) <<": ";
        cin>>numeri[i];
    }
    for(i=0; i<3; i++)
    {
        numeri[i]=2*numeri[i];
    }

    return 0;
}
