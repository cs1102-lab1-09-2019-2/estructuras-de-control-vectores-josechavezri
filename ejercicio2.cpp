#include<iostream>
#include<vector>
#include<map>
using namespace std;

int moda(vector<int> &lista);
vector<int> leerConsole() {
    vector<int> lista;
    int num;
    while(true){
        cout<<"Ingrese un numero positivos mayores que 3, escriba -1 si ya no quiere ingresar mas numeros :";
        cin>>num;
        if (num < 3){
            break;
        }
        lista.push_back(num);
    }
    return lista;
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
}

int moda(vector<int> &lista) {
    int rep = 0, rep2 = 0, maxrep = 0;
    for(int i = 0; i < lista.size(); i++){
        int j = 0;
        rep = 0;
        for( j = 0; j < lista.size(); j++){
            if(lista[i] == lista[j]){
                rep = rep + 1;
            }
        }
        if(rep > rep2){
            rep2 = rep;
            maxrep = i;
        }
    }

    /*
    La moda es el elemento que mas se repite en la lista de elementos
     */
    return lista[maxrep];
}


int main() {
    cout<<"Calcular la moda de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsole();
    int moda_elemento = moda(leer_usuario);
    cout<<"La moda es: "<<moda_elemento<<"\n";
}
