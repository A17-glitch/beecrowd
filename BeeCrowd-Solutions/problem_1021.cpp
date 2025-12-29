#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double N;
    cin >> N;

    // Convert to cents to avoid floating-point issues
    int value = (int)(N * 100 + 0.5);

    cout << "NOTAS:" << endl;

    int nota100 = value / 10000;
    cout << nota100 << " nota(s) de R$ 100.00" << endl;
    value -= nota100 * 10000;

    int nota50 = value / 5000;
    cout << nota50 << " nota(s) de R$ 50.00" << endl;
    value -= nota50 * 5000;

    int nota20 = value / 2000;
    cout << nota20 << " nota(s) de R$ 20.00" << endl;
    value -= nota20 * 2000;

    int nota10 = value / 1000;
    cout << nota10 << " nota(s) de R$ 10.00" << endl;
    value -= nota10 * 1000;

    int nota5 = value / 500;
    cout << nota5 << " nota(s) de R$ 5.00" << endl;
    value -= nota5 * 500;

    int nota2 = value / 200;
    cout << nota2 << " nota(s) de R$ 2.00" << endl;
    value -= nota2 * 200;

    cout << "MOEDAS:" << endl;

    int moeda1 = value / 100;
    cout << moeda1 << " moeda(s) de R$ 1.00" << endl;
    value -= moeda1 * 100;

    int moeda50 = value / 50;
    cout << moeda50 << " moeda(s) de R$ 0.50" << endl;
    value -= moeda50 * 50;

    int moeda25 = value / 25;
    cout << moeda25 << " moeda(s) de R$ 0.25" << endl;
    value -= moeda25 * 25;

    int moeda10 = value / 10;
    cout << moeda10 << " moeda(s) de R$ 0.10" << endl;
    value -= moeda10 * 10;

    int moeda5 = value / 5;
    cout << moeda5 << " moeda(s) de R$ 0.05" << endl;
    value -= moeda5 * 5;

    int moeda1cent = value;
    cout << moeda1cent << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
