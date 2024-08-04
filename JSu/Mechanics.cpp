#include "Player.h"
#include "Texts.h"

#include<iostream>

Player* jugador = nullptr;

void Morelife(Player& jugador){
        jugador.SetVida(jugador.GetVida() + 1);
        std::cout<<"Obtuviste una vida adicional! \n";
}

void selectJugador(int jugador_p, Player** jugador) {

    if (*jugador != nullptr) {
        delete *jugador;
    }

    if (jugador_p == 1) {
        *jugador = new Player();
    } 
    
    else if (jugador_p == 2) {
        *jugador = new Player(4, 3);
    } 
    
    else if (jugador_p == 3) {
        int vida, escudo;

        std::cout << "Coloca sus vidas -> ";
        std::cin >> vida;
        std::cout << "Coloca sus escudos -> ";
        std::cin >> escudo;
        *jugador = new Player(vida, escudo);
    } 
    
    else {std::cout << "Opción inválida\n"; *jugador = nullptr;}
}