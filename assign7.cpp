#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1; // store factorial

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    cout << "Factorial of " << n << " is " << fact << "\n";

    return 0;
}
