#include<iostream>
using namespace std;

int main(){
    //fibonaci dinamico
    unsigned long  FIB[100];
    FIB[0]=0;
    FIB[1]=1;

    for(int i=2;i<100;i++){
        FIB[i]=FIB[i-1]+FIB[i-2];
    }
    cout<<"Los 100 primeros numeros de la secuencia fibonacci son\n";
    
    for(int i=0;i<100;i++){
        cout<<"f"<<i+1<<": "<<FIB[i]<<endl;
    }
    cout<<endl;
    return 0;
}