#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;

    // Convert start and end times to minutes
    int start = h1 * 60 + m1;
    int end = h2 * 60 + m2;

    // Calculate duration
    int duration;
    if (end > start)
        duration = end - start;
    else
        duration = (24 * 60 - start) + end; // Game crosses midnight

    // Convert back to hours and minutes
    int hours = duration / 60;
    int minutes = duration % 60;

    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;

    return 0;
}
