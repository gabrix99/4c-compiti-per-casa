#include <iostream>
using namespace std;
//ESERCIZIO PER CASA

// Questo programma contiene concetti del libro che vanno da pagina
// 132 a 140

class Data{
   public:
   int giorno;
   int mese;
   int anno;
   void set_data(int g, int m, int a);
   };

class Studente {
  private:
    unsigned int id;
    float altezza= 1,78;
    Data data_nascita;
     // questo attributo ha come tipo la classe Data, che va definita sopra
  public:
    string nome;
    string cognome;
    int anno_di_corso;
    char sezione;
    string crea_progetto(string traccia);
    void stampa_altezza();
    void set_nome(string n);
    void set_cognome(string c);
    void set_data(int g, int m, int a);
};

int main () {
  Studente s;

  s.set_nome("Gino");
  s.set_cognome("Strada");
  s.set_data(3, 7, 1978);
  // inserire il codice che assegna una data di nascita
  // allo studente s
  cout << "Nome: " << s.nome << endl;
  cout << "Cognome: " << s.cognome << endl;
  s.stampa_altezza();
   cout << "data nascita: " << s.data_nascita << endl;
  // inserire il codice che stampa la data di nascita
  // dello studente s
  cout << "Svolgimento: " << s.crea_progetto("velocità della luce") << endl;
  return 0;
}

string Studente::crea_progetto(string traccia){
    return "Ho cercato in Internet riguardo a " + traccia;
}

void Studente::stampa_altezza(){
    cout << "Altezza: " << altezza << endl;
}

void Studente::set_nome(string n){
    nome = n;
}

void Studente::set_cognome(string c){
    cognome = c;
}

void Data::set_giorno(int g, int m, int a){
    giorno = g;
    mese = m;
    anno = a;
}



