#include<cmath>
#include<iostream>

using namespace std;

float funcionRaiz(float a, float b){
    return (sqrt(a+b)/5);
}

int main(){
    double a=5;
    double b=3;
    float res=funcionRaiz(a,b);
    cout<<"Para valores de a="<<a<<", b="<<b<<", la respuesta es: \n";
    cout<<res<<endl;
    return 0;
}