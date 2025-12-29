#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    double A, B, C;

    cin >> A >> B >> C;

    
    if (A < B) swap(A, B);
    if (A < C) swap(A, C);
    if (B < C) swap(B, C);

   
    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        
        double Asq = A * A;
        double BsqCsq = B * B + C * C;

        if (Asq == BsqCsq)
            cout << "TRIANGULO RETANGULO" << endl;
        else if (Asq > BsqCsq)
            cout << "TRIANGULO OBTUSANGULO" << endl;
        else
            cout << "TRIANGULO ACUTANGULO" << endl;

        
        if (A == B && B == C)
            cout << "TRIANGULO EQUILATERO" << endl;
        else if (A == B || B == C || A == C)
            cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
