#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream filesOpen;

  filesOpen.open("lista.txt");
  //Por si hay un error
  if (filesOpen.fail()) {
    cerr<<"Error while opening the file"<<endl;
    exit(1);
  }
  //Como leer un int
  /*int x, y;

  filesOpen >> x >> y;

  cout<< "Numero 1: " << x<<endl;
  cout<<"Numero 2: "<<y<<endl;
  */

  //como leer un string
  string file;
  int counter;
  while (!filesOpen.eof()) {
    filesOpen >> file;
    //validacion, para saber cuantas cosas hay de la misma cosa
    if (file == "mango") {
        counter++;
    }
  }
  //Impresion de cuantas cosas hay
  cout<< "Los mangos encontrados fueron "<<counter<<endl;
  //siempre hay que cerrar el archivo
  filesOpen.close();

  //para crear un archivo de texto
  ofstream fileRead;
  fileRead.open("prueba.txt");
  //para escribir en un archivo de texto
  fileRead << "Nombre: " << "Enrique Jose Galeano Talavera" <<endl;
  //se cierra el archivo de texto
  fileRead.close();
  return 0;
}
