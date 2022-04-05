#include <iostream>
#include <cmath> // operaciones matematicas  // log, raices, cos, sen, tan
using namespace std;

int main(){
    // calcular todos los divisores de n
    long long n;
    cin >> n;


    // sqrt(n) .- halla la raiz


    // 10^14
    for(long long i = 1; i * i <= n; i++){
        if(n % i == 0){
            cout << n << " es divisible por " << i << "\n";
            cout << n << " es divisible por " << n / i << "\n";
            
        }
    }

    // Complejidad: O(raiz(n))
    /*

    raiz(n)     10^7
    -------- = ------   = 0.1 segundos         
      10^8      10^8
    */

    ----

    return 0;
}
