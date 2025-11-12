#include <iostream>
using namespace std;

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

int main() {
    for (int i = 1; i <= 500; i++) {
        int n = i, sum = 0;
        while (n > 0) {
            sum += fact(n % 10);
            n /= 10;
        }
        if (sum == i)
            cout << i << " ";
    }
    return 0;
}
