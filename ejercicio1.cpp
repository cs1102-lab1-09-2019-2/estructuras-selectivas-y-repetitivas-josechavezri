#include<iostream>
using namespace std;

float promedio(){
    float practica1, practica2, practica3, practica4, proyecto, examen1,examen2, promedio;
    cout<<"practica 1:";
    cin>>practica1;
    cout<<"practica 2:";
    cin>>practica2;
    cout<<"practica 3:";
    cin>>practica3;
    cout<<"practica 4:";
    cin>>practica4;
    cout<<"proyecto:";
    cin>>proyecto;
    cout<<"examen 1:";
    cin>>examen1;
    cout<<"examen 2:";
    cin>>examen2;
    promedio = practica1 * 0.05 + 0.1 * practica2 + 0.1 * practica3 + 0.15*practica4 + 0.2*proyecto+0.2 * examen1+ 0.2*examen2;
    return promedio;
}
int evento(int x){
    if(x >=18 and 20 >= x){cout<<"UD asistirá ACM – ICPC International Collegiate Programming Contest "<<"\n";}
    if(x >= 15 and 18> x){cout<<"UD asistirá Imagine Cup "<<"\n";}
    if(x < 15 and 12 <= x ){cout<<"UD asistirá Hackathon de Miraflores "<<"\n";}
    if(x < 12){cout<<"Necesita mejorar. "<<"\n";}
    return 0;
}



int main(){
    int x, na, i;
    cout<<"numero de alumnos:";
    cin>>na;
    for(i = 1; na >= i; i++){
        cout<<"alumno numero"<<i<<"\n";
        x = promedio();
        cout<<"su promedio es: "<<x<<"\n";
        evento(x);
    }
}