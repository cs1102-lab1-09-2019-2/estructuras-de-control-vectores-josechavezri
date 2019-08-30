/*

Leer tres numeros del usuario separados por espacio: 10 15 20
Y encuentra el mayor valor: 30

*/
#include<iostream>
using namespace std;

int main(){
    int x, y, z;
    cout<<"tres numeros separados por un espacio:";
    cin>>x>>y>>z;
    if(x == y and y == z){
        cout<<x;}
    if(x == y and y > z){cout<<x;}
    if(x == z and z > y){cout<<x;}
    if(z == y and y > x){cout<<z;}
    if(x > y and x > z){
        cout<<x;}
    if(y > x and y > z){
        cout<<y;}
    if(z > x and z > y){
        cout<<z;}


}