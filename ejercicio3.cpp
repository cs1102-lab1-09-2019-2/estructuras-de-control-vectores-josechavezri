#include<iostream>
#include<vector>
using namespace std;

int mediana(vector<int> &lista);
vector<int> leerConsola() {
    vector<int> lista;
    int num;
    while(true){
        cout<<"Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros :";
        cin>>num;
        if (num < 0){
            break;
        }
        lista.push_back(num);
    }
    return lista;
    //Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:
}
int mediana(vector<int> &lista) {
    int i = 0;
    float media = 0;
    if(lista.size() % 2 == 0){
        i = lista.size() / 2;
        media = (lista[i] + lista[i - 1]) / 2;
    }
    if(lista.size() % 2 != 0){
        i = lista.size() / 2;
        media = lista[i];}


    /*
    Si el vector es 3, 9, 11, 15
    Si el número de observaciones es par,
     la mediana corresponde al promedio de los dos valores centrales.
     Por ejemplo, en la muestra 3, 9, 11, 15, la mediana es (9+11)/2=10.
     (v[4/2 -1] + v[4/2])/2 = (v[1] + v[2])/2 = (9+11)/2

    Si el vector es 3, 9, 11, 15, 16
    Si el numero de observaciones es impar,
     Por ejemplo, en la muestra 3, 9, 11, 15, 16, la mediana es 11
     v[4/2] = v[2] = 11
     */
    return media;
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
}
