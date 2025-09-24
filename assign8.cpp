#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter the start of range: ";
    cin >> start;
    cout << "Enter the end of range: ";
    cin >> end;

    int a = 0, b = 1, next = 0;

    cout << "Fibonacci series in range " << start << " to " << end << ":\n";

    while (next <= end) {
        if (next >= start)
            cout << next << " ";

        next = a + b;  // next Fibonacci number
        a = b;
        b = next;
    }

    cout << "\n";
    return 0;
}
