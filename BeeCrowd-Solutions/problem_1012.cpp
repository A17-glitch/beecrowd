//problem : 1012
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    double a,b,c;
    double pie = 3.14159;
    cin>>a>>b>>c;

    double area_rectangled_triangle = 1/2.0*(a*c);
    printf("TRIANGULO: %0.3lf\n",area_rectangled_triangle);
    double circle = pie * c * c;
    printf("CIRCULO: %0.3lf\n",circle);
    double trap = 1/2.0 * (a+b) * c;
    printf("TRAPEZIO: %0.3lf\n",trap);
    double square = b*b;
    printf("QUADRADO: %0.3lf\n",square);
    double rec = a*b;
    printf("RETANGULO: %0.3lf\n",rec);




 return 0;
}
