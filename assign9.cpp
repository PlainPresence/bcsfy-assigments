#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers from 1 to 100:\n";

    for (int num = 2; num <= 100; num++) {
        int count = 0;

        for (int i = 1; i <= num; i++) {
            if (num % i == 0)
                count++;
        }

        if (count == 2) // only divisible by 1 and itself
            cout << num << " ";
    }

    cout << "\n";
    return 0;
}
