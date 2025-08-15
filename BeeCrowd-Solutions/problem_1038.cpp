//problem : 1038
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    double code1 = 4.00, code2 = 4.50, code3 = 5.00, code4 = 2.00, code5 = 1.50,co,x,y;


    cin>>x>>y;

    if(x == 1){
        co = code1 * y;
        printf("Total: R$ %0.2lf\n",co);
    }
    else if(x==2){
        co = code2 * y;
        printf("Total: R$ %0.2lf\n",co);
    }
    else if(x==3){
        co = code3 * y;
        printf("Total: R$ %0.2lf\n",co);
    }
    else if(x==4){
        co = code4 * y;
        printf("Total: R$ %0.2lf\n",co);
    }
    else if(x==5){
        co = code5 * y;
        printf("Total: R$ %0.2lf\n",co);
    }
    else{
        printf("Wrong Input\n");
    }




return 0;}
