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
   public:
        void set_data(int g, int m, int a);
        void stampa_data();
};

class Studente {
  private:
    unsigned int id;
    float altezza;
    Data data_nascita;
    // NOOOO data_nascita.set_data(12,7,2000);// come si fa ad assegnare un valore??
  public:
    string nome;
    string cognome;
    int anno_di_corso;
    char sezione;
    string crea_progetto(string traccia);
    void stampa_altezza();
    void stampa_data();
    void set_nome(string n);
    void set_cognome(string c);
    void set_data(int g, int m, int a);
    Studente(unsigned int i, string n, string c, float alt,
                   int g, int m, int a);
    Studente();
    Studente(string n, string c);
};

int main () {
  Studente s(1, "Gino", "Strada", 1.78, 12, 7, 2000);
  Studente r;
  cout << "Nome: " << s.nome << endl;
  cout << "Cognome: " << s.cognome << endl;
  s.stampa_altezza();
  s.stampa_data() ;
  cout <<endl;
  // s.data_nascita.stampa_data(); NOOOOO
  // COME STAMPO QUI LA DATA DI NASCITA ??
  Studente n("Marco", "Ferri");
  n.set_data(11, 8, 2000);
  n.stampa_data();

  return 0;
}

Studente::Studente(unsigned int i, string n, string c, float alt,
                   int g, int m, int a){
    id = i;
    nome = n;
    cognome = c;
    altezza = alt;
    data_nascita.giorno = g;
    data_nascita.mese = m;
    data_nascita.anno = a;
}

Studente::Studente(){
    cout << "Dammi l'id: ";
    cin >> id;
    cout << "Dammi il nome: ";
    cin >> nome;
    cout << "Dammi il cognome: ";
    cin >> cognome;
    cout << "Dammi l'altezza: ";
    cin >> altezza;
    cout << "Dammi il giorno di nascita: ";
    cin >> data_nascita.giorno;
    cout << "Dammi il mese di nascita: ";
    cin >> data_nascita.mese;
    cout << "Dammi l'anno di nascita: ";
    cin >> data_nascita.anno;
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

void Data::set_data(int g, int m, int a){
    giorno = g;
    mese = m;
    anno = a;
}

void Data::stampa_data(){
    cout << giorno <<"/"<< mese <<"/"<< anno;
}

void Studente::stampa_data(){
    data_nascita.stampa_data();
}

 Studente::Studente(string n, string c){
   nome=n;
   cognome=c;
}
void Studente::set_data(int g, int m, int a){
    data_nascita.set_data(g,m,a);
}
