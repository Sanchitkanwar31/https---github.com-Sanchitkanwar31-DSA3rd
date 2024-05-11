#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int i, j;
        char a[8][8];
        for (i = 0; i < 8; i++) {
            for (j = 0; j < 8; j++) {
                cin >> a[i][j];
            }
        }
        bool found = false;
        for (i = 1; i < 7; i++) {
            for (j = 1; j < 7; j++) {
                if (a[i][j] == '#' && a[i - 1][j - 1] == '#' && a[i - 1][j + 1] == '#' && a[i + 1][j - 1] == '#' && a[i + 1][j + 1] == '#') {
                    cout << i+1 << " " << j+1 << endl;
                    found = true;
                    break;
                }
            }
            if (found) break; // Exit outer loop if the condition is met
        }
    }
    return 0;
}
