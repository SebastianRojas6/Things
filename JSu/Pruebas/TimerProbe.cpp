#include <iostream>
#include <thread>  // Para std::this_thread::sleep_for
#include <chrono>  // Para std::chrono::seconds
#include <string>

using std::cout;
using std::this_thread::sleep_for;
using std::chrono::seconds;

void imprimirRayas(int numeroRayas);
void limpiarPantalla();

int main() {
    int tiempo = 10;

    for (int i = tiempo; i > 0; --i) {
        cout << "Hola \n";
        cout << "Tu tiempo restante es: ";
        imprimirRayas(i);
        cout << " (" << i << " segundos)\n";
        sleep_for(seconds(1));  // Pausa de 1 segundo
        
        limpiarPantalla();
    }

    cout << "Tiempo agotado!\n";

    return 0;
}

void imprimirRayas(int numeroRayas) {
    cout << std::string(numeroRayas, '/');
}

void limpiarPantalla() {
    cout << "\033[2J\033[1;1H";
}
