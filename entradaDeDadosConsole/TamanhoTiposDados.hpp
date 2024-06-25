
#include <stdio.h>
#include <string.h>
class TamanhoDado{

  private:
      string tamanho;



  public:

    string tamanhoEmBytes(string tipo){
        int caso=0;

        if(tipo == "char"){
            caso = 1;
        }
        else if(tipo == "int"){
            caso = 2;
        }

        switch(caso){
        case 1 :

        return  cout << "Char ocupa: " << sizeof(char) << "byte(s)";

        break;


         case 2 :

        return  cout << "Int ocupa: " << sizeof(int) << "byte(s)";

        break;

       /*  case "short" :

        return  cout << "Short ocupa: " << sizeof(short) << "byte(s)";

        break;


         case  "long" :

        return  cout << "Long ocupa: " << sizeof(long) << "byte(s)";

        break;*/

    }

}

};
