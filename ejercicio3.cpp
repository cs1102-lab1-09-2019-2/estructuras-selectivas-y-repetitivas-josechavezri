#include<iostream>
using namespace std;
int ingresenumeros(int x){
    int num, b;
    do {cout<<"ingrese numero: ";
        cin>>num;
        if(num > b){b = num;}


        x--;
    }while(x != 0);
    return b;
}

int main(){
    int n, y;
    cout<<"cantidad de numeros: ";
    cin>>n;
    y = ingresenumeros(n);
    cout<<"el valor maximo es: "<<y;

}
