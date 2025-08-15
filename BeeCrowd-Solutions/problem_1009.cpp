#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    char name[20];
    double fix_salary,total_sale;


    scanf("%s",name);
   cin>>fix_salary>>total_sale;

    double total = fix_salary + total_sale*0.15;

    printf("TOTAL = R$ %0.2lf\n",total);




return 0;
}
