#include <iostream>
using namespace std;

int main() {
    int n, x, found = 0;
    cout << "Enter 5 numbers: ";
    int arr[5];
    for (int i = 0; i < 5; i++) cin >> arr[i];
    cout << "Enter number to search: ";
    cin >> x;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == x) {
            cout << "Found at position " << i + 1;
            found = 1;
            break;
        }
    }
    if (!found)
        cout << "Not found";
    return 0;
}
