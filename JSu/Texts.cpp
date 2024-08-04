#include <iostream>
#include <string>

#include "Texts.h"
#include "Player.h"

using std::cout;
using std::cin;

void Inicio(){
    cout << "================================ \n"
         << "      Bienvenido al juego \n"
         << "=============================== \n";
}

void Stage(int stage){
    cout << "================================ \n"
         << "       Stage[" << stage << "]  \n"
         << "=============================== \n";
}

void Continuar(){
    cout<<"Desea continuar? (Presiona N si es no) -> ";
}

void BorrarPantalla(){
    cout << "\033[2J\033[1;1H";
}

void PausarPrograma(){
    cout << "Presiona Enter para continuar...";
    cin.ignore();
    cin.get();
}

void imprimirRayas(int numeroRayas) {
    cout << std::string(numeroRayas, '/');
}

void SelectDificult(){
    cout<<"Elije la dificultad \n 1. Fácil \n 2. Medio \n 3. Dificil \n";
}

void SelectPersonaje(){
        cout << "=================================== \n"
             << "      Que personaje vas a usar?     \n"
             << "=================================== \n"
             << "1. Player por defecto               \n"
             << "2. Player op                        \n"
             << "3. Personalizado                    \n"
             << "=================================== \n";
}