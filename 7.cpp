#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter numbers (-1 to stop): ";
    while (true) {
        cin >> n;
        if (n == -1)
            break;
        if (n < 0)
            continue;
        cout << "You entered: " << n << endl;
    }
    return 0;
}
