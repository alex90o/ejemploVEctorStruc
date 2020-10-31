#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include<string.h>

struct palabrabuscada {
  char *palabra;
  int   cantidad;
};
//fuente
//https://stackoverflow.com/questions/4892680/sorting-a-vector-of-structs

// función de comparación:
bool compareByLength(const palabrabuscada &a, const palabrabuscada &b)
{
    return a.cantidad < b.cantidad;
}
//---------

class indice
    {
    public:
        vector <palabrabuscada> ind;
        int posicionActual;
    public:
        indice();
        void cargar_indice(char *palabra,int cant);
        void leer_indice();

        ~indice();
    };

indice::indice()
{
this->posicionActual=0;

}

void indice::cargar_indice( char *palabra,int cant)
{
this->ind.push_back(palabrabuscada());
this->ind[posicionActual].palabra=palabra;

this->ind[posicionActual].cantidad=cant;
this->posicionActual++;

    //const char *palabra1="libros";
//this->ind[posicionActual]=palabra1;
//--------
//this->ind->directorio= directorio;
//this->ind->nombre_archivo= nombrearchivo;
//this->ind->cantidad=cant;
//indice.ind->palabra

    //this->ind.push_back(palabrabuscada());
    //this->ind.push_back({palabra,directorio,nombrearchivo,cant});
}


indice::~indice()
{

}
int main() {
indice indicArchivos;
/*
int num;
char *palab;


cout <<  "Introduce un numero entero: ";
cin >> num;

cout <<  "Introduce la palabra: ";
cin>>palab;

indicArchivos.cargar_indice(palab,num);
int i=0;

cout <<"Palabra"<<": "<<indicArchivos.ind[i].palabra;

cout << endl;
cout <<"Cantidad"<<": "<<indicArchivos.ind[i].cantidad;
cout << endl;

*/
cout <<"con el for"<< endl;

for (int i = 0; i < 5; i++){
    char *palabaux=new char;

    int numaux;
    cout <<  "Introduce un numero entero: ";
    cin >> numaux;

    cout <<  "Introduce la palabra: ";
    cin>>palabaux;


    indicArchivos.cargar_indice(palabaux,numaux);

}
cout << endl;

 for (int i = 0; i < indicArchivos.ind.size(); i++){
     cout <<"Palabra "<<indicArchivos.ind[i].palabra;
     cout << endl;


     cout <<"Cantidad de veces "<<indicArchivos.ind[i].cantidad;
     cout << endl<<endl;

 }

//usar std::sorten el encabezado #include <algorithm>:
 std::sort(indicArchivos.ind.begin(), indicArchivos.ind.end(), compareByLength);

 cout<<"despues del sort"<<endl<<endl;

 for (int i = 0; i < indicArchivos.ind.size(); i++){
     cout <<"Palabra "<<indicArchivos.ind[i].palabra;
     cout << endl;


     cout <<"Cantidad de veces "<<indicArchivos.ind[i].cantidad;
     cout << endl<<endl;

 }

    return 0;
}

