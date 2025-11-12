#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        int n = i, sum = 0, temp = i;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (n % sum == 0)
            cout << i << " ";
    }
    return 0;
}
