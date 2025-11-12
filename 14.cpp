#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, sum = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    int copy = n;
    while (copy != 0) {
        copy /= 10;
        digits++;
    }
    while (temp != 0) {
        int r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }
    if (sum == n)
        cout << "Armstrong number";
    else
        cout << "Not Armstrong";
    return 0;
}
