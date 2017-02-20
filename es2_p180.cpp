#include <iostream>
#include <time.h>
using namespace std;

class Rettangolo{
private:
    double ipotenusa;
    double cateto1;
    double cateto2;
public:
    double area(double cateto1, double cateto2);
    double perimetro (double cateto1, double cateto2, double ipotenusa);
    Rettangolo (double cateto1, double cateto2, double ipotenusa);
};

int main(){

double ipotenusa;
double cateto1;
double cateto2;

cout<<"inserisci l'ipotenusa: ";
cin>>ipotenusa;
cout<<"inserisci il primo cateto: ";
cin>>cateto1;
cout<<"inserisci il secondo cateto: ";
cin>>cateto2;

Rettangolo



}
