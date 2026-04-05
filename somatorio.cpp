#include <bits/stdc++.h>
using namespace std;


//Calcula o somatorio de um numero positivo.
int calcula_somatorio(int numero){
    if (numero==1){
        return 1;
    }
    return numero + calcula_somatorio(numero-1);
}

int main(){
    int numero;
    cin>>numero;
    cout<<calcula_somatorio(numero);

}