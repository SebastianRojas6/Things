#include <iostream>
#include "Textos.h"

void Inicio(){

    std::cout<<"=========================================== \n";
    std::cout<<"               Bienvenido                   \n";
    std::cout<<"=========================================== \n";
    std::cout<<"1. Empezar a jugar \n";
    std::cout<<"2. Salir \n \n";
    std::cout<<"Coloca un valor -> ";
}


void BorrarPantalla(){
    std::cout << "\033[2J\033[1;1H";
}

void PausarPrograma(){
    std::cout << "Presiona Enter para continuar...";
    std::cin.ignore();
    std::cin.get();
}

void Logic(int value){

    if(value == 2){
        EXIT_SUCCESS;
    }

    else{
        std::cout<<"Numero equivocado";
    }
}