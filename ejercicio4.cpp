/*
Escribir un programa que imprima lo siguiente:

12*****
123****
1234***
12345**
123456*
1234567

*/

#include <iostream>
using namespace std;

int main() {
    int numero, num, n = 1;
    cin>>numero;
    num = 2;
    while(num <= numero){
        n = 1;
        for(int i = 0; i < num ; i++){
            cout<<n;
            n++;
        }
        for(int j = -1 ; j < (numero - n) ;j ++){
            cout<<"*";
        }
        cout<<"\n";

        num++;
    }
}
