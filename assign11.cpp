#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Descending order: ";
    for (int i = n-1; i >= 0; i--)  // print in reverse
        cout << nums[i] << " ";
    cout << "\n";

    cout << "Ascending order: ";
    for (int i = 0; i < n; i++)  // print in input order
        cout << nums[i] << " ";
    cout << "\n";

    return 0;
}
