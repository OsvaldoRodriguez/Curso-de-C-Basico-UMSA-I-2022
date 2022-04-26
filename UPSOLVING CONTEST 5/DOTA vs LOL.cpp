#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 5; // 2e5 = 2 * 10^5
int A[N];
int acc[N];
int main(){

    int n, m;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        string cadena;
        cin >> cadena;
        if(cadena == "LOL")
            A[i] = 1;
        else
            A[i] = 0;
    }


    acc[0] = A[0];

    for(int i = 1; i < n; i++)
        acc[i] = acc[i - 1] + A[i];




    // O(m)
    for(int j = 0; j < m; j++){ // m
        int L, R;
        cin >> L >> R;
        L--;
        R--;
        int lol = acc[R];
        if(L > 0)
            lol = lol - acc[L - 1];
        int dota = R - L + 1 - lol;

        if(lol == dota)
            cout << "AFK\n";
        else if(lol > dota)
            cout << "LOL\n";
        else
            cout << "DOTA\n";
    }
    return 0;
}
