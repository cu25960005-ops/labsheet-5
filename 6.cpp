#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> n;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime && n > 1)
        cout << "Prime number";
    else
        cout << "Not prime";
    return 0;
}
