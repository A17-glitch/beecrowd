#include <iostream>
using namespace std;

int main() {
    int startDay, endDay;
    int startHour, startMin, startSec;
    int endHour, endMin, endSec;

    // Input
    string dummy; 
    cin >> dummy >> startDay;
    cin >> startHour >> dummy >> startMin >> dummy >> startSec;
    cin >> dummy >> endDay;
    cin >> endHour >> dummy >> endMin >> dummy >> endSec;

    // Convert everything to seconds
    int totalStartSeconds = startDay * 24 * 3600 + startHour * 3600 + startMin * 60 + startSec;
    int totalEndSeconds = endDay * 24 * 3600 + endHour * 3600 + endMin * 60 + endSec;

    int duration = totalEndSeconds - totalStartSeconds;

    // Calculate days, hours, minutes, seconds
    int days = duration / (24 * 3600);
    duration %= 24 * 3600;
    int hours = duration / 3600;
    duration %= 3600;
    int minutes = duration / 60;
    int seconds = duration % 60;

    // Output
    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;

    return 0;
}
