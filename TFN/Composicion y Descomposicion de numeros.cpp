#include <iostream>
#include <cmath> // operaciones matematicas  // log, raices, cos, sen, tan
using namespace std;

int main(){

    int a = 9243453;



    // descomposición por derecha
    cout << "DESCOMPOSICION POR DERECHA\n";
    while(a > 0){
        // obtengo el ultimo digito del numero a
        int digito = a % 10;

        // aqui  va el codigo
        cout << "el ultimo digito de " << a << " es : " << digito << '\n';
        a = a / 10;
    }

    // descomponer por izquierda

    cout << "DESCOMPOSICION IZQUIERDA\n";
    int b = 924;


    int cant_dig = (int)log10(b) + 1;

    cout << cant_dig << " \n";

    while(b > 0){

        int potencia = (int)pow(10, cant_dig - 1);   
        int digito = b / potencia;

        // aqui va el codigo

        cout << "el primer digito de " << b << " es : " << digito << '\n';
        b = b % potencia;
        cant_dig = cant_dig - 1; 
        // cant_dig -= 1;
        // cant_dig--;
    }



    // COMPOSICION DE NUMEROS

    // composicion por izquierda

    cout << "COMPOSICION POR IZQUIERDA\n";
    int c = 924;
    int digito = 8;
    int can_dig = (int) log10 (c) + 1;

    int pot = (int) pow(10, can_dig);

    int nuevo_numero = digito * pot + c;

    cout << nuevo_numero << '\n';

    cout << "COMPOSICION POR DERECHA\n";
    

    int d = 924;
    int digg = 8;

    int new_numero = d * 10 + digg;

    cout << new_numero  << "\n";

    return 0;
}
