//problem : 1013
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){



    int a,b,c,d,t;
    cin>>a>>b>>c;

     d = (a+b+abs(a-b))/2;
     t = (d+c+abs(d-c))/2;
    cout<<t<<" eh o maior"<<endl;



    return 0;
}
