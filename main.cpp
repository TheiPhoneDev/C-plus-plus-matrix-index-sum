#include <iostream>


using namespace std;

const int righeMax=30;
const int colonneMax=30;

//prototipi
void caricaMatrice(int matrix[righeMax][colonneMax], int &righe, int &colonne);
void visualizzaMatrice(int matrix[righeMax][colonneMax], int righe, int colonne);
int Menu();

int main() {

  int scelta;
  int righe, colonne;
  int matrix[righeMax][colonneMax];
  do {
    scelta=Menu();
    switch(scelta) {
      case 1:
        caricaMatrice(matrix,righe,colonne);
      break;
      case 2:
        visualizzaMatrice(matrix,righe,colonne);
      break;
      case 0:
        cout<<"Esci"<<endl;
      break;
      default:
        cout<<"Attenzione, scelta sbagliata!"<<endl;
      break;
    }
  }while(scelta!=0);

}


int Menu() {
  int scegli;
  cout<<"-----------------MENU-----------------"<<endl;
  cout<<"1-Carica matrice"<<endl;
  cout<<"2-Visualizza matrice"<<endl;
  cout<<"0-Fine"<<endl;
  cout<<"Scegli un operazione: "<<endl;
  cin>>scegli;

  return scegli;
}


void caricaMatrice(int matrix[righeMax][colonneMax], int &righe, int &colonne) {

  int somma;

  cout<<endl;

  do{
    cout<<"Inserisci il numero di righe: ";
    cin>>righe;
    if(righe<=0||righe>righeMax) {
      cout<<"Errore"<<endl;
    }
  }while(righe<=0||righe>righeMax);

  do{
    cout<<"Inserisci il numero di colonne: ";
    cin>>colonne;
    if(colonne<=0||colonne>colonneMax) {
      cout<<"Errore"<<endl;
    }
  }while(colonne<=0||colonne>colonneMax);

  for(int i=0; i<righe; i++) {
    for(int j=0; j<colonne; j++) {
      somma=i+j;
      matrix[i][j]=somma;
    }
  }


  cout<<endl;

}

void visualizzaMatrice(int matrix[righeMax][colonneMax], int righe, int colonne) {

  cout<<endl;

  for(int i=0; i<righe; i++) {
    for(int j=0; j<colonne; j++) {
      cout<<matrix[i][j]<<"\t";
    }
    cout<<endl;
  }

  cout<<endl;

}
