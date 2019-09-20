#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){

    //generando 20 numeros aleatorios entre 1 y 50
    srand(time(NULL));
    int vector[20];
    for(int i=0;i<20;i++){
        vector[i] = rand()%51;   
    }
    //buscando el menor 
    int menor=vector[0];
    int pos_menor=0;
    for(int i=1;i<20;i++){
        if(vector[i]<menor){
            menor = vector[i];
            pos_menor=i;
        }
    }
    cout<<"\nEl vector con 20 elementos es:"<<"\n";
    for(auto x: vector){
        cout<<" "<<x;
    }
    cout<<"\n\n";
    cout<<"El numero menor es: "<<menor<<" su posicion es: "<<pos_menor<<"\n";

    return 0;
}