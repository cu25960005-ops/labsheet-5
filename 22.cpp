#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, temp;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if (n % sum == 0)
        cout << "Harshad number";
    else
        cout << "Not Harshad";
    return 0;
}
