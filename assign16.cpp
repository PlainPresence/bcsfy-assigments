#include <iostream>
using namespace std;

// Define Cricket structure
struct Cricket {
    char playerName[50];
    char teamName[50];
    float battingAverage;
};

int main() {
    Cricket players[3];  // array of 3 players

    // Input player details
    for (int i = 0; i < 3; i++) {
        cout << "Enter player " << i + 1 << " details:\n";
        cout << "Player Name: ";
        cin >> players[i].playerName;  // single-word input
        cout << "Team Name: ";
        cin >> players[i].teamName;    // single-word input
        cout << "Batting Average: ";
        cin >> players[i].battingAverage;
        cout << "\n";
    }

    // Display player details
    cout << "--- Player Details ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "Player Name: " << players[i].playerName << "\n";
        cout << "Team Name: " << players[i].teamName << "\n";
        cout << "Batting Average: " << players[i].battingAverage << "\n\n";
    }

    return 0;
}
