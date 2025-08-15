//problem : 1044
#include<iostream>
using namespace std;
int main(){

    int n1,n2;
    cin>>n1>>n2;
    if(n1>0 && n2>0){
         if(n2%n1 == 0 || n1%n2 == 0){
        cout<<"Sao Multiplos"<<endl;
    }
    else{
        cout<<"Nao sao Multiplos"<<endl;
    }
    }
    else{
        cout<<"Nao sao Multiplos"<<endl;
    }




    return 0;}
