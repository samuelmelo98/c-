
/*
Arquivo que implementa os m�todo/fun��es da classe Entrada
*/

#include "MinhaClasse.hpp"
using std::cout;
using std::endl;


    void Entrada::metodoTest(string value){
    cout << "string\n" << value << endl;
    }

    string Entrada::setX(string value){
    x = value;
    }

    string Entrada::getX(){
    return x;
    }


