#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
    cin >> n;
    int type;
    if (n % 3 == 1)
        type = 1;
    else
        type = 2;
    int sum = 0;
    while (sum != n) {
        cout << type;
        sum += type;
        type = 3 - type;
    }
    cout << '\n';
			
    }
    return 0;    
}
