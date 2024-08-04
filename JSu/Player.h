#pragma once

class Player{

    private:
         int Vida;
         int Escudo;
    public:
    
        Player(int vida, int escudo);
        Player();

        int GetVida();
        int GetEscudo();

        void SetVida(int vida);
        void SetEscudo(int escudo);

        int CalculateLife();
        void MostrarDatos();
        
};