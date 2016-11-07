#include <iostream>
#include <string.h>

using namespace std;

float verdure;
float frutta;
float pesci;
float carni;
float dolci;


void aquisizione();
float media();

int main()
{
   aquisizione();
   cout<<"la media degli incassi giornalieri è: " <<media();
 return 0;
}

void aquisizione()
{
  cout<<"inserire l'incasso del reparto verdure: ";
  cin>>verdure;
  cout<<"inserire l'incasso del reparto frutta: ";
  cin>>frutta;
  cout<<"inserire l'incasso del reparto pesci: ";
  cin>>pesci;
  cout<<"inserire l'incasso del reparto carni: ";
  cin>>carni;
  cout<<"inserire l'incasso del reparto dolci: ";
  cin>>dolci;
}

float media()
{
    float media;
    media=(verdure+frutta+pesci+carni+dolci)/5;
    return media;
}
