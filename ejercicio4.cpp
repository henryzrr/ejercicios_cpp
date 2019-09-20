
#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;

int main(){
    srand(time(NULL));
    int carnets[80];
    //generando carnets aleatorios
    cout<<"Ingrese los carnets:"<<endl;
    for(int i=0;i<80;i++){ 
        cout<<i+1<<": ";
        cin>>carnets[i];
    }
    //mostrando los carnets generados
    for(int i=0;i<80;i++)
        cout<<i+1<<": "<<carnets[i]<<endl;

    //leer carnet
    int carnet;
    cout<<"\nIngrese carnet a buscar\n";
    cin>>carnet;
    cout<<endl;
    //buscar carnet
    int i=0;
    while(i<80){
        if(carnet==carnets[i])
            break;
        i++;
    }

    if(i==80){
        cout<<"El carnet "<<carnet<<" no se encuentra en el vector\n";
    }else{
        cout<<"El carnet se encontro en\n"<<i+1<<endl;
    }
    
}