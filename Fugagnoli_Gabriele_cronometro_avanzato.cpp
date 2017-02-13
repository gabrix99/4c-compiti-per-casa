#include <iostream>
#include <time.h>
using namespace std;

class Cronometro{
private:
    time_t inizio;
    time_t fine;
    bool started;
    time_t tempi[10];
    bool controllo[10];
    int i;
public:
    void start();
    void stop();
    void print();
    void selezione();
    void cancella();
    void media();
    Cronometro();
};
int main(){

    char scelta;
    Cronometro cronometro;
    do {
        cout << "[i] fai partire il cronometro." << endl;
        cout << "[f] ferma il cronometro." << endl;
        cout << "[p] mostra tutti i tempi registrati." << endl;
        cout << "[s] seleziona un tempo." << endl;
        cout << "[c] cancella il tempo selezionato." << endl;
        cout << "[m] fai la media dei tempi registrati" << endl;
        cout << "[x] termina." << endl;
        cin >> scelta ;
        switch(scelta) {
            case 'i': cronometro.start(); break;
            case 'f': cronometro.stop(); break;
            case 'p': cronometro.print(); break;
            case 's': cronometro.selezione(); break;
            case 'c': cronometro.cancella(); break;
            case 'm': cronometro.media(); break;
            case 'x': break;
            default: cout << "opzione non valida" << endl;
        }
    }while(scelta != 'x');
}

Cronometro::Cronometro(){
    inizio = 0;
	fine= 0;
	started= false;
	for(i=0; i<10; i++)
    {
        tempi[i]=0;
        controllo[i]=false;
    }
    i=0;
}

void Cronometro::start(){
	if(started==false){
	inizio= time(0);
    started= true;
}

}

void Cronometro::stop(){
	if(started==true){
	fine= time(0);
	started= false;
	tempi[i]= (fine-inizio);
	controllo[i]=true;
	cout<<"il tempo numero " <<i  <<" e': " <<tempi[i] <<" secondi" <<endl <<endl;
	i++;
	if(i<10){
	cout<<"tempo numero " <<i <<" selezionato" <<endl <<endl;
	}
	else{
	i=0;
	cout<<"tempo numero " <<i <<" selezionato" <<endl <<endl;
	}
}
}
void Cronometro::print(){
	//cout<<"il tempo numero " <<i  <<" e': " <<tempi[i] <<" secondi" <<endl;
	int k;
    for(k=0; k<10; k++)
    {
        if(controllo[k]==true)
        {
           cout<<"il tempo numero " <<k  <<" e': " <<tempi[k] <<" secondi" <<endl;
        }
        else{}
    }
    }




void Cronometro::selezione(){

  cout<<"inserire il numero del tempo da selezionare (da 0 a 9): ";

  cin>>i;
  cout<<endl;
  if(9<i<0)
  {
      do
      {
      cout<<"numero inserito non compreso tra 0 e 9, reinserirlo: ";
      cin>>i;
      cout<<endl;
      }
      while(9<i<0);
  }
else{}
  cout<<"tempo numero " <<i <<" selezionato" <<endl <<endl;

}
void Cronometro::cancella(){
    tempi[i]=0;
    controllo[i]=false;
    cout<<"tempo numero " <<i  <<" cancellato" <<endl <<endl;
}

void Cronometro::media(){
    int somma=0;
    int n_tempi=0;
    int j;
    for(j=0; j<10; j++)
    {
        if(controllo[j]==true)
        {
            somma=somma+tempi[j];
            n_tempi++;
        }
        else{}
    }
    cout<<"la media dei tempi registrati e': " <<(somma/n_tempi) <<" secondi" <<endl <<endl;

}
