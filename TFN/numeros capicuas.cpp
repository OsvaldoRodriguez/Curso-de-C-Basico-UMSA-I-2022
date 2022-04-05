#include <iostream>
#include <cmath> // operaciones matematicas  // log, raices, cos, sen, tan
using namespace std;

int main(){


    /*
    Dado un número entero n, verificar si el numero es 
    capicua

    un numero es capicua si tiene el mismo valor al leeer 
    de izq a der   como de der a izq

    Ej   
    121   es capicua
    123   no es capicua
    
    */
    int n;
    cin >> n;

    // desc por derecha y comp por derecha

    int nuevo_numero = 0;

    int copia_n = n;
    while(n > 0){
        int dig = n % 10;
        // componer por derecha
        nuevo_numero = nuevo_numero * 10 + dig;
        n = n / 10;
    }


    cout << copia_n <<  " " << nuevo_numero << '\n';
    if(copia_n == nuevo_numero){
        cout << "es capicua\n";
    }else{
        cout << "no es capicua\n";
    }


    // procesar un numero (comp o desc) si quiero conservar el orden de los digitos

    // n = 123  (procesar)     -> n = 123

        // Descomponer por derecha y componer por izquierda
        // Descomponer por izquierda y componer por derecha

    // si se quiere invertir el orden de los digitos de un numero n

        // Descomponer por derecha y componer por derecha
        // Descomponer por izquierda y componer por izquierda



    return 0;
}
