#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;

    cout << "Enter a three digit number: ";
    cin >> num;

    // Extract digits one by one using % and /
    int last = num % 10;        // last digit by getting remainder
    int middle = (num / 10) % 10; // middle digit same as that
    int first = num / 100;      // first digit same as that

    // Construct reversed number
    rev = last * 100 + middle * 10 + first;

    cout << "Mirror image of " << num << " is " << rev << endl;

    return 0;
}
