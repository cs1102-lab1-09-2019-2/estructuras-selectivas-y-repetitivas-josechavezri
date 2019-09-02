#include<iostream>

using namespace std;


int main(){
    int numero, n =1, m = 0;
    cin>>numero;
    for(int i = 0; i < numero;i++){
        for(int j = 0 ; j < numero; j++){
            if(i == 0){cout<<"*";}
            if (i != 0 and i != numero -1){if(j==0 || j == numero-1){cout<<"*";}}

            if(j == m and i == n and i != numero-1 ){cout<<"*";m++,n++;}

            if(i > 0 and i < numero-1 and j != numero-2 and j != numero -3 and i != numero-1 ){cout<<" ";}
            if(i == numero-1){cout<<"*";}

        }
        cout<<"\n";}
}