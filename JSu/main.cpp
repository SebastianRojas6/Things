//Elige un numero, ejemplo 5 -> 5 + 6 = 11 
// 11 + 12 -> 13
// 13 + 14 -> 27

#include <iostream>
#include <string> 

#include "Texts.h"
#include "Player.h"
#include "Mechanics.h"

using std::cout;
using std::cin;
using std::string;

template<typename Type>
Type sum(Type x) {   
    return x + x + 1;
}


int main() {

    string rpta; 

    int stage = 1, jugador_p;

    double num, prueba;

    Player* jugador = nullptr;

    Inicio();
    SelectPersonaje();
    cin>>jugador_p;

    selectJugador(jugador_p , &jugador);

    if (jugador == nullptr) {
        cout << "No se pudo crear el jugador. Terminando programa.\n";
        return EXIT_FAILURE;
    }

    cout << "Coloca un numero -> ";
    cin >> num;

    PausarPrograma();
    BorrarPantalla();

    do {

        Stage(stage);
        jugador->MostrarDatos();

        cout << "Coloca la suma de: " << num << " + " << num + 1 << " \n";
        cout << "--> ";
        cin >> prueba;

            double num2 = sum(num);
            
            if (prueba == num2) {cout << "Felicidades! \n";
                if(stage % 10 == 0){ Morelife(*jugador);}} 
            
            else {
                cout << "Fallaste :( \n";

                if (jugador->GetEscudo() > 0) {
                    jugador->SetEscudo(jugador->GetEscudo() - 1);
                } else {
                    jugador->SetVida(jugador->GetVida() - 1);
                }

                PausarPrograma();
                BorrarPantalla();

                if (jugador->CalculateLife() == 0) {
                    cout << "Perdiste \n";
                    PausarPrograma();
                    delete jugador;
                    return EXIT_SUCCESS;
                }
            }

            num = num2;
            stage++;

        Continuar();
        cin >> rpta;

        BorrarPantalla();

    } while (rpta != "N");

    delete jugador;
    return 0;
}

