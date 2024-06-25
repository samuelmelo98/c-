#include <iostream>

//using namespace std;

int main()
{
    //<< concatenar
    // std::endl adiciona nova linha
    int x,y,z;
     std::cout << "Digite um valor! \a" << x  << std::endl;
     std::cin >> x;
     std::cout << x;
     std::cout << "Digite dois numeros!";
     std::cin  >> y >> z;
     std::cout << "Soma:" << y <<"+" << z <<"="<<y+z;
    return 0;
}
