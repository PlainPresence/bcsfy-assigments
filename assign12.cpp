#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int maxVal, minVal;

    // Input elements
    cout << "Enter 9 elements of 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Initialize max and min with the first element
    maxVal = minVal = matrix[0][0];

    // Find max and min
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > maxVal)
                maxVal = matrix[i][j];
            if (matrix[i][j] < minVal)
                minVal = matrix[i][j];
        }
    }

    cout << "Maximum element: " << maxVal << "\n";
    cout << "Minimum element: " << minVal << "\n";

    return 0;
}
