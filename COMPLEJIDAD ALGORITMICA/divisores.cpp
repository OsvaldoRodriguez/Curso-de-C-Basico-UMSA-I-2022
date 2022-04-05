#include <iostream>
#include <cmath> // operaciones matematicas  // log, raices, cos, sen, tan
using namespace std;

int main(){
    // calcular todos los divisores de n
    long long n;
    cin >> n;




    for(long long i = 1; i <= n; i++){
        if(n % i == 0){// n es divisible entre i
            // i es divisor de n
            cout << n << " es divisible entre " << i << "\n";
        }
    }



    /*
    COMPLEJIDAD O(n)

      10^12 
     ------    =  10000 [segundos]
      10^8

    */


    /*

    COMPLEJIDAD ALGORITMICA


    O(1)  complejidad constante

    - operaciones aritmeticas de manera constante

    - sumar 5 + 5
    - restar, multplicar dividir
    - asignar valor a variables
    - evaluación de expresiones
    - impresiones y lecturas

    O(n)
    
    O(n)
    
    for(int i = 0; i < n; i++){
        // codigo
    }

    // O(m)

    for(int j = 0; j < m; j++){
        // codigo
    }


    O(n ^ 2)

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // codigo
        }
    }


    */




    /*
    HALLAER LA COMPLEJIDAD DEL ALGORITMO
    O(1), O(n), O(n^2), O(n^3)

    



    

    */


    return 0;
}
