#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter numbers (0 to stop): ";
    while (true) {
        cin >> n;
        if (n == 0)
            break;
        if (n > 0)
            count++;
    }
    cout << "Total positive numbers: " << count;
    return 0;
}
