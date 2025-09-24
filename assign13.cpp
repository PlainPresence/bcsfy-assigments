#include <iostream>
using namespace std;

// Function to swap using call by value
void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapByValue: x = " << x << ", y = " << y << "\n";
}

// Function to swap using call by reference
void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nBefore swapping: a = " << a << ", b = " << b << "\n";

    // Swap by value
    swapByValue(a, b);
    cout << "After swapByValue (main): a = " << a << ", b = " << b << "\n";

    // Swap by reference
    swapByReference(a, b);
    cout << "After swapByReference (main): a = " << a << ", b = " << b << "\n";

    return 0;
}
