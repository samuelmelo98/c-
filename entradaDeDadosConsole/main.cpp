#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
using std::getline;
using namespace std;

#include "MinhaClasse.hpp"
#include "TamanhoTiposDados.hpp"

int main()
{
    string x;
    /*
    Criação de um objeto em c++
    */
    Entrada obj;
    TamanhoDado tamanho;
    tamanho.tamanhoEmBytes("char");
    obj.setX("setar valor");
    obj.metodoTest("123");
    cout << "Hello world!" << endl;
    /*
    Entrado dados do teclado no sonsole em C++

    */
    cout <<"Digite um valor:";
    getline(cin,x);
    cout << x;
    cout << obj.getX();

    return 0;
}
