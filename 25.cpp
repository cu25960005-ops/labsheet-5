#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Prime factors: ";
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    return 0;
}
