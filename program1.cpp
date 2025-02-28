#include<iostream>
using namespace std;
int main (){
    float ntpract,ntTeorica,ntpart;

    int ntFinal;
    cout<<"Ingrese nota practica: " ;
    cin>>ntprac;
    cout <<"Ingrese nota teorica:" ;
    cin<<ntTeorica;
    cout <<"Ingrese nota participacion:" ;
    cin<<ntpart;

    ntpract = ntprac*0.30;
    ntTeorica *=0.60;
    ntpart *=0.10;
    ntFinal= ntprac+ntTeorica+ntpart;
    cout<<"La nota final es: "<<ntFinal;






}