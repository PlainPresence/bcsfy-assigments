#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 400 == 0) {
        cout << year << " is a Leap Year\n";
    }
    else if (year % 100 == 0) {
        cout << year << " is Not a Leap Year\n";
    }
    else if (year % 4 == 0) {
        cout << year << " is a Leap Year\n";
    }
    else {
        cout << year << " is Not a Leap Year\n";
    }

    return 0;
}
