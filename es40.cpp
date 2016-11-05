#include <iostream>

using namespace std;

bool appartenenza();

float x, y, m, q;

int main()
{
  cout<<"inserisci il coefficiente angolare: ";
  cin>>m;
  cout<<"inserisci q: ";
  cin>>q;
  cout<<"inserisci l'ascissa: ";
  cin>>x;
  cout<<"inserisci l'ordinata: ";
  cin>>y;
  if (appartenenza()==true) cout<<"il punto appartiene alla retta";
     else cout<<"il punto non appartiene alla retta";

     return 0;
}

bool appartenenza()
{
    bool app;
    if (y==(m*x)+q) app=true;
    else app=false;

    return app;
}
