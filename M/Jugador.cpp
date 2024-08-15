#include "Jugador.h"

Jugador::Jugador(bool EST, char F,int V):EsSuTurno(EST),Ficha(F),Vida(V){}

 bool Jugador::GetTurno(){return EsSuTurno;}
 
 char Jugador::GetFicha(){return Ficha;}
 
 int Jugador::GetVida(){ return Vida; }