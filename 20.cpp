#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, temp;
    cout << "Enter number: ";
    cin >> n;
    temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    cout << "Reverse = " << rev << endl;
    if (rev == n) cout << "Palindrome";
    else cout << "Not palindrome";
    return 0;
}
