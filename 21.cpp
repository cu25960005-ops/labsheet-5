#include <iostream>
using namespace std;

int main() {
    int n, even = 0, odd = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (d % 2 == 0)
            even += d;
        else
            odd += d;
        n /= 10;
    }
    cout << "Sum of even digits = " << even << endl;
    cout << "Sum of odd digits = " << odd;
    return 0;
}
