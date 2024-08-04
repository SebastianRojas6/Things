#include "Player.h"
#include <iostream>

//Constructor
Player::Player(int vida, int escudo) : Vida(vida), Escudo(escudo){}
Player::Player() : Vida(2), Escudo(1) {}

//getters
int Player::GetVida(){
    return Vida;
}

int Player::GetEscudo(){
    return Escudo;
}

//setters
void Player::SetVida(int vida){
    Vida = vida;
}
    
void Player::SetEscudo(int escudo){
    Escudo = escudo;
}

//Calcular la vida
int Player::CalculateLife(){
    return Vida + Escudo;
}

void Player::MostrarDatos(){
    std::cout<<"======================================== \n";
    std::cout<<"Su vida es: "<<GetVida()<<" \n";
    std::cout<<"El numero de escudos es: "<<GetEscudo()<<" \n";
    std::cout<<"Vida total: "<<CalculateLife()<<" \n";
    std::cout<<"======================================== \n";
}

