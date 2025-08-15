//problem : 1008
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int number, time;
    double payment;
    cin>>number>>time>>payment;
    printf("NUMBER = %d\n",number);
    double salary = payment * time;
    printf("SALARY = U$ %0.2lf\n",salary);
    return 0;
}
