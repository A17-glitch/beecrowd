//problem : 1010
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int product1code,product1unit,product2code,product2unit;
    double price1,price2;

    cin>> product1code>>product1unit>>price1;
    cin>> product2code>>product2unit>>price2;

   double v = (product1unit * price1) + (product2unit * price2);
    printf("VALOR A PAGAR: R$ %0.2lf\n",v);


    return 0;
}
