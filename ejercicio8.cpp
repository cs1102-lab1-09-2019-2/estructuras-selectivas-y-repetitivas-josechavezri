#include<iostream>

using namespace std;

int pf(int p, int t){
    int n;
    n = p - p/ 250 * t;
    return n;
}
int main(){
    int a, b, c, d, ale, jas;
    do{
        cout<<"puntos de Alessia: ";
        cin>>a;
        cout<<"puntos de Jasmin: ";
        cin>>b;
        cout<<"tiempo de Alessia: ";
        cin>>c;
        cout<<"tiempo de Jasmin: ";
        cin>>d;
    }while(200 > a and b > 3500 and 0 > c and d >180 );
    jas = pf(a, c);
    ale = pf(b, d);
    if(jas > ale){cout<<"\"Jasmin""\"";}
    if(ale > jas){cout<<"\"Alessia""\"";}
    if(ale == jas){cout<<"\"empate""\"";}
}