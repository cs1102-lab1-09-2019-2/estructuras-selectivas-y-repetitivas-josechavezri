#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"N: ";
    cin>>n;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n / 2;j++){
            if(i % 2 == 0){
                cout<<"#";}
            if(i % 2 == 0){
                cout<<"@";}
            if(i % 2 != 0){
                cout<<"@";
                cout<<"#";}
        }
        if(i % 2 == 0){cout<<"#";}
        if(i % 2 != 0){cout<<"@";}
        cout<<"\n";
    }
}