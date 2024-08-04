#pragma once
#include <atomic>

extern int stage;
extern std::atomic<bool> time_up; 

//functions
void Inicio();
void Stage(int stage);
void Continuar();
void BorrarPantalla();
void PausarPrograma();
void imprimirRayas(int numeroRayas);
void SelectDificult();
void SelectPersonaje();