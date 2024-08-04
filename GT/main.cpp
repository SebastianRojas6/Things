#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::cin;
using std::vector;

int main(){

    string dia;

    cout<<"================================= \n";
    cout<<"            Bienvenido            \n";
    cout<<"================================= \n";

    cout<<"Que dia es hoy: ";
    cin>>dia;

    vector<string> dias = {"Lunes" , "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};

    for(int i=0 ; i<dias.size(); i++){
        cout<<dias[i]<<std::endl;
    }


}