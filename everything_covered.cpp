#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long  x, y;
        cin >> x >> y;
        long long  a = x / y;

        // Check if a is an integer
        while (a * y != x) {
            y = y + 1;
            a = x / y;
        }
        cout << a << endl;
    }
    return 0;
}
