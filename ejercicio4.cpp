#include<iostream>
using namespace std;

int tipo_entrada(){
    int n;
    n = 0;
    while(n != 1 || n != 2 || n != 3 || n != 4){
        if(n == 1){break;}
        if(n == 2){break;}
        if(n == 3){break;}
        if(n == 4){break;}
        cout<<"tipo de entada: "<<"\n";
        cout<<"1. Super Vip       "<<"precio  "<<"212"<<"\n";
        cout<<"2. Vip             "<<"precio  "<<"170"<<"\n";
        cout<<"3. Preferencial    "<<"precio  "<<"136"<<"\n";
        cout<<"4. General         "<<"precio  "<<"59"<<"\n";
        cout<<"Selecciona tipo de entrada: ";
        cin>>n;
    }
    return n;}
int claro(){
    string m;
    int d;
    cout<<"Es cliente claro: ";
    cin>>m;
    if(m == "s"|| m=="s"){d = 1;}
    if(m == "n"|| m =="N"){d= 0;}
    return d;
}


int main(){
    int n, d, p1 = 212, p2 = 170, p3 = 136, p4 =59, n1= 212, n2 = 170, n3= 136, n4 = 59;
    n = tipo_entrada();
    d = claro();
    if(d == 1){
        if(n == 1){cout<<"monto a pagar"<<n1 - n1*0.2;}
        if(n == 2){cout<<"monto a pagar"<<n2 - n2*0.2;}
        if(n == 3){cout<<"monto a pagar"<<n3 - n3*0.2;}
        if(n == 4){cout<<"monto a pagar"<<n4 - n4*0.2;}
    }
    if(d == 0){
        if(n == 1){cout<<"monto a pagar"<<n1;}
        if(n == 2){cout<<"monto a pagar"<<n2;}
        if(n == 3){cout<<"monto a pagar"<<n3;}
        if(n == 4){cout<<"monto a pagar"<<n4;}
    }


}