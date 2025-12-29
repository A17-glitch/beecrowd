#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // Store original order
    int orig1 = a, orig2 = b, orig3 = c;

    // Sorting using simple if statements
    int first, second, third;

    if (a <= b && a <= c) {
        first = a;
        if (b <= c) {
            second = b;
            third = c;
        } else {
            second = c;
            third = b;
        }
    } else if (b <= a && b <= c) {
        first = b;
        if (a <= c) {
            second = a;
            third = c;
        } else {
            second = c;
            third = a;
        }
    } else {
        first = c;
        if (a <= b) {
            second = a;
            third = b;
        } else {
            second = b;
            third = a;
        }
    }

    // Print in ascending order
    cout << first << endl;
    cout << second << endl;
    cout << third << endl;

    cout << endl;

    // Print in original order
    cout << orig1 << endl;
    cout << orig2 << endl;
    cout << orig3 << endl;

    return 0;
}
