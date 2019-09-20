#include<iostream>

using namespace std;


int main(){
    //solicitando numero de estudiantes
    int n;
    cout<<"Ingrese cantidad de estudiantes:\n";
    cin>>n;
    cout<<endl;
    
    //ingresar datos de cada estudiante mas nota
    string nombre_estudiantes[n];
    float nota_estudiantes[n];
    string calificacion[n];
    for(int i=0;i<n;i++){
        cout<<"\nIngrese nombre:\n";
        cin>>nombre_estudiantes[i];
        cout<<"\nIngrese nota:\n";
        cin>>nota_estudiantes[i];
        if(nota_estudiantes[i]>=90.0)
            calificacion[i] = "Sobresaliente";
        else if(nota_estudiantes[i]>70.0)
            calificacion[i] = "Notable";
        else if(nota_estudiantes[i]>50.0)
            calificacion[i] = "Bien";
        else 
            calificacion[i] = "Regular";
    }
    
    for(int i=0;i<n;i++){
        cout<<"Nombre: "<<nombre_estudiantes[i]<<" Nota: "<<nota_estudiantes[i]<<" Calificacion: "<<calificacion[i]<<endl;
    }
    return 0;
}