#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N; // number of test cases

    int totalRabbits = 0, totalRats = 0, totalFrogs = 0;
    int amount;
    char type;

    for (int i = 0; i < N; i++) {
        cin >> amount >> type;
        if (type == 'C') {
            totalRabbits += amount;
        } else if (type == 'R') {
            totalRats += amount;
        } else if (type == 'S') {
            totalFrogs += amount;
        }
    }

    int totalAnimals = totalRabbits + totalRats + totalFrogs;

    // Output
    cout << "Total: " << totalAnimals << " cobaias" << endl;
    cout << "Total de coelhos: " << totalRabbits << endl;
    cout << "Total de ratos: " << totalRats << endl;
    cout << "Total de sapos: " << totalFrogs << endl;

    cout << fixed << setprecision(2); // for 2 decimal places
    cout << "Percentual de coelhos: " << (totalRabbits * 100.0 / totalAnimals) << " %" << endl;
    cout << "Percentual de ratos: " << (totalRats * 100.0 / totalAnimals) << " %" << endl;
    cout << "Percentual de sapos: " << (totalFrogs * 100.0 / totalAnimals) << " %" << endl;

    return 0;
}
