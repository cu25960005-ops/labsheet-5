#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    long long fact = 1;
    cout << "Enter number: ";
    cin >> n;
    while (i <= n) {
        fact *= i;
        i++;
    }
    cout << "Factorial = " << fact;
    return 0;
}
