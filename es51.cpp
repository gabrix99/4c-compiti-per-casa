#include<iostream>

using namespace std;

int numeri[10];

int main()
{
    int superiori=0;
    int i;
    for(i=0; i<10; i++)
    {
        cout<<"inserisci il valore n " <<(i+1) <<": ";
        cin>>numeri[i];
    }
    for(i=0; i<10; i++)
    {
      if(numeri[i]>5) superiori++;
      else{}
    }
     cout<<"i numeri superiori a 5 sono " <<superiori;

     return 0;
}
