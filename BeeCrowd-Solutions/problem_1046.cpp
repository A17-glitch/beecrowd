//problem : 1046
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }
    else if(b>a){
        printf("O JOGO DUROU %d HORA(S)\n",b-a);
    }
    else if(a>b){
        printf("O JOGO DUROU %d HORA(S)\n",(b+24)-a);
    }
    return 0;}
