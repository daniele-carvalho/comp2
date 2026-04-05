#include <bits/stdc++.h>
using namespace std;

int calcula_potencia(int n, int e){
    if (e<=0 || n<=0){
        return 1;
    }
    return  n*calcula_potencia(n, e-1);
}

int main(){
    int numero; int exponencial;
    cin>>numero>>exponencial;
    cout<<calcula_potencia(numero, exponencial);
}