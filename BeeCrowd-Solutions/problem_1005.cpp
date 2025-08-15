//problem : 1005
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double a,b;
    cin>> a;
    cin>> b;
    double weight_a = 3.5;
    double weight_b = 7.5;

    double media = (a*weight_a+b*weight_b) / (weight_a+weight_b);
    printf("MEDIA = %0.5lf\n",media);

    return 0;
}
