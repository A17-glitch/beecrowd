//problem : 1006
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    double weight_a = 2, weight_b = 3, weight_c = 5;
    double media = (a*weight_a + b*weight_b + c*weight_c) / (weight_a+weight_b+weight_c);
    printf("MEDIA = %.1lf\n",media);
    return 0;
}
