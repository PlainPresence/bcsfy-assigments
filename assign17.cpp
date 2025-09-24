#include <iostream>
using namespace std;

int main() {
    char str[100], str2[100];
    int length = 0;

    cout << "Enter a string (no spaces): ";
    cin >> str;

    // Find length
    while (str[length] != '\0') {
        length++;
    }
    cout << "Length of the string: " << length << "\n";

    // Copy string to str2
    for (int i = 0; i <= length; i++) {
        str2[i] = str[i];
    }
    cout << "Copied string: " << str2 << "\n";

    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    cout << "Reversed string: " << str << "\n";

    return 0;
}
