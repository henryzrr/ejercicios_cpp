#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    int nFilas = 20;
    srand(time(NULL));
    int matriz[nFilas];
    
    for(int i=0;i<nFilas;i++){
        matriz[i]=1+rand()%(201-1);
    }

    //mostrando la matriz original
    cout<<"La matriz original es:\n";
    for(int i=0;i<nFilas;i++){
        cout<<matriz[i]<<" ";
        if((i+1)%4==0)cout<<endl;    
    }
    //recorrido de la matriz, se recorre la matriz en zig zag de 4 en 4 
    cout<<"\nEl recorrido es:\n";
    int i=0;
    int op=0;
    int numOp = nFilas;
    //op:0 == suma op:1 == resta
    int limite=3;
    while(numOp--){
        if(op==0){
            cout<<matriz[i]<<" ";
            if(i==limite){
                op=1;
                limite=i+1;
                i=i+4;
            }else{
                i++;
            }
        }else{
            cout<<matriz[i]<<" ";
            if(i==limite){
                op=0;
                limite=i+7;
                i=i+4;
            }else{
                i--;
            }
        }
        
    }
    cout<<endl;
    return 0;
}