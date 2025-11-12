#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (int i = 1; i <= 500; i++) {
        int n = i, sum = 0, temp = i;
        while (temp > 0) {
            int r = temp % 10;
            sum += r * r * r;
            temp /= 10;
        }
        if (sum == n)
            cout << n << " ";
    }
    return 0;
}
