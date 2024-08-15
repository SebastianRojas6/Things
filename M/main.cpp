#include <iostream>
#include "Mapa.h"

using std::cout;


int main(){

    char Turno;
    int fila;
    int columna;


    imprimirVector(Mapa);

    std::cin>>Turno;
    std::cin>>fila >>columna;
    ponerFicha(Mapa,Turno,fila,columna);
    imprimirVector(Mapa);

}




