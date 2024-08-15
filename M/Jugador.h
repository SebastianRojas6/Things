class Jugador{

    private:
        //Atributos
        bool EsSuTurno;
        char Ficha;
        int Vida;

    public:

        //Métodos

        //Constructor
        Jugador(bool EST, char F, int V);

        //getters
        bool GetTurno();
        char GetFicha();
        int GetVida();

        //setters
        void SetFicha();
        void SetVida();




};