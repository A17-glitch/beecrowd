//problem : 1036
#include<iostream>
#include<cmath>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main(){

    double a,b,c;
    cin>>a>>b>>c;
    double d = b*b-(4*a*c);
    if(a==0 || d<0){
        printf("Impossivel calcular\n");
    }
    else{

    double R1 = (-b + sqrt(d)) / (2.0*a);
    double R2 = (-b - sqrt(d)) / (2.0*a);
    printf("R1 = %0.5lf\n",R1);
    printf("R2 = %0.5lf\n",R2);
    }
    return 0;
    }
