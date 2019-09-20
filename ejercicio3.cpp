#include<iostream>

using namespace std;

int main(){
    //pidiendo 20 palabras
    string vector1[20];
    puts("Ingrese 20 palabras");
    for(int i=1;i<=20;i++){
        cout<<"Palabra "<<i<<" :";
        cin>>vector1[i];    
    }
    cout<<"\n";
    //añadiendo 's' a todas las palabras y volcando el arreglo
    string vector_res[20];
    int j=0;
    for(int i=19;i>=0;i--){
        vector_res[j++]=vector1[i]+"s";
    }
    //mostrando 
    cout<<"\n\nEl vector original tiene las siguientes palabras: \n";

    for(int i=0;i<20;i++){
        cout<<vector1[i]<<", ";
    }
    cout<<"\n\nEl vector resultante tiene las siguientes palabras: ";
    for(int i=0;i<20;i++){
        cout<<vector_res[i]<<", ";
    }
    cout<<endl;
}