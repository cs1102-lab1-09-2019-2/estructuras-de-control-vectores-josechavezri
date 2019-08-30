#include<iostream>
#include<string>
#include<vector>
using namespace std;
float promedio(vector<int> &lista);

vector<int> leerConsola() {
    vector<int> lista;
    int num;
    while(true){
        cout<<"Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros :";
        cin>>num;
        if (num < 3){
            break;
        }
        lista.push_back(num);
    }
    return lista;
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
}

float promedio(vector<int> &lista) {
    float suma = 0;
    for (int i = 0;i < lista.size(); i++){
        suma = suma + lista[i];
    }

    /*
      El promedio es la suma de todos los elementos dividido entre el total de elementos
       */
    return suma / lista.size();
}

int main() {
    cout<<"Calcular el promedio de los ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    float promedio_elemento = promedio(leer_usuario);
    cout<<"El promedio es: "<<promedio_elemento<<"\n";
}