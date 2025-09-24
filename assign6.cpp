#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, temp;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;  // keep original number

    while (temp > 0) {
        reversed = reversed * 10 + temp % 10; // add last digit
        temp = temp / 10;                     // remove last digit
    }

    cout << num << (num == reversed ? " is a Palindrome\n" : " is Not a Palindrome\n");

    return 0;
}
