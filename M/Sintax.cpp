#include <iostream>
#include "Textos.h"
#include "Mapa.h"


char Turno;
int fila;
int columna;
int Valor;

void RunGame(){

    Inicio();
    std::cin>>Valor;

    do{ Logic(Valor); }
    while(Valor != 2);

}

void Logic(int value){
    
    if( value == 1){

        imprimirVector(Mapa);
        std::cin>>Turno;
        std::cin>>fila >>columna;
        ponerFicha(Mapa,Turno,fila,columna);
        imprimirVector(Mapa);

    }


    if(value == 2){
        EXIT_SUCCESS;
    }

    else{
        std::cout<<"Numero equivocado";
    }
}