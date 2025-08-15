//problem : 1116
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int t,i;
    float a,b;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b;
        if(b==0){
            cout<<"divisao impossivel"<<endl;
        }
        else{
            printf("%0.1f\n",a/b);
        }
    }
    return 0;}
