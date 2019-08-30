/*
 El usuario puede escoger de 5 opciones (de 1 a 5). Entonces pregunta por dos
 valores enteros para el calculo

 MENU:
 1.- suma
 2.- resta
 3.- multiplicar
 4.- dividir
 5.- modulo

 Ingresa una opcion: 1
 Ingresa los dos numeros: 5 96
 Resultado: 111

 Continuar? y

 // Si el usuario ingresa 'y' a la pregunta Continuar? el usuario puede escoger otra opcion.

 */

#include <iostream>
#include <stdexcept> //Validar en la division por 0
using std::cout;
using std::cin;
using std::invalid_argument;

void mostrarMenu();
int sumar(int a, int b){
    return a + b;}
int restar(int a, int b){
    return a - b;}
int multiplicar(int a, int b){
    return a * b;}
float dividir(int a, int b){
    return a / b;}
int modulo(int a, int b){
    return a % b;}


void mostrarMenu() {
    cout<<"***************************************************\n";
    cout<<"                     MENU                          \n";
    cout<<"***************************************************\n";
    cout<<"  1.- Add\n";
    cout<<"  2.- Resta\n";
    cout<<"  3.- Multiplicar\n";
    cout<<"  4.- Dividir\n";
    cout<<"  5.- Modulo\n";
}

int main() {
    int b, c, a ;
    mostrarMenu();
    cin>>a;
    if(a == 1){
        cin>>b;
        cin>>c;
        cout<<sumar(b,c);}
    if(a == 2){
        cin>>b;
        cin>>c;
        cout<<restar(b,c);}
    if(a == 3){
        cin>>b;
        cin>>c;
        cout<<multiplicar(b,c);}
    if(a == 4){
        cin>>b;
        cin>>c;
        cout<<dividir(b,c);}
    if(a == 5){
        cin>>b;
        cin>>c;
        cout<<modulo(b,c);}
    return 0;
}
