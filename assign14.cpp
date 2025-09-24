#include <iostream>
using namespace std;

int main() {
    char str[100];
    char *ptr;
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);  // input a string with spaces

    ptr = str; // pointer points to the first character

    // Count characters using pointer
    while (*ptr != '\0') {
        count++;
        ptr++; // move pointer to next character
    }

    cout << "Number of characters: " << count << "\n";

    return 0;
}
