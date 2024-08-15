#include <iostream>
#include "Mapa.h"

using std::vector;
using std::cout;

vector<vector<char>> Mapa = {
    {'-', '-', '-'},
    {'-', '-', '-'},
    {'-', '-', '-'}
};

void imprimirVector(vector<vector<char>> &m){

    for(size_t i = 0 ; i < m.size(); i++){

        for(size_t j = 0; j < m[i].size(); j++ ){

            cout << m[i][j];

        }

        cout << "\n";
    }

}

void ponerFicha(vector<vector<char>> &m , char figura, int fila, int columna){

    if (fila >= 0 && fila < m.size() && columna >= 0 && columna < m[fila].size()) {
        if (m[fila][columna] == '-') {
            m[fila][columna] = figura;
    }}

    else{
        cout<<"Posicion incorrecta";
    }    

}