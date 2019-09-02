#include<iostream>
#include<math.h>

using namespace std;


int soat(int n){
    int j;
    j = n / 1000;
    j = j % 10;
    if(j % 2 == 0){return 1;}
    if(j % 2 != 0){return 0;}
}
int CITV(int n){
    int j;
    j = n / 100;
    j = j % 10;
    if(j % 2 == 0){return 1;}
    if(j % 2 != 0){return 0;}
}
int autorizado(int n){
    int j;
    j = n % 100;
    if(j % 3 == 0){return 2;}
    if(j % 3 != 0){return 3;}
}


int main(){
    int n, s, c, a;
    string so, ci, au;

    do{
        cout<<"numero: ";
        cin>>n;

    }while(n <11111111 and n > 99999999);
    s = soat(n);
    c = CITV(n);
    a = autorizado(n);
    if(s == 1){ so = "Vigente";}
    if(s == 0){ so = "Vencido";}
    if(c == 1){ ci = "Vigente";}
    if(c == 0){ ci = "Vencido";}
    if(a == 3){au = "No";}
    if(a == 2){au = "si";}



    cout<<"Soat: "<<so<<"\n";
    cout<<"CITV: "<<ci<<"\n";
    cout<<"autorizado: "<<au<<"\n";


}