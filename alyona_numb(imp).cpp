#include <bits/stdc++.h>
using namespace std;
 
long long c1[5], c2[5];
 
int main()
{
    int n, m;
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; i++) c1[i%5]++;
    for (int i = 1; i <= m; i++) c2[i%5]++;
    printf("%lld\n",
        c1[0]*c2[0]+c1[1]*c2[4]+c1[2]*c2[3]+c1[3]*c2[2]+c1[4]*c2[1]
        );
}


// Loop iteration breakdown:

// i = 1: c1[1 % 5] is incremented, so c1[1] becomes 1.
// i = 2: c1[2 % 5] is incremented, so c1[2] becomes 1.
// i = 3: c1[3 % 5] is incremented, so c1[3] becomes 1.
// i = 4: c1[4 % 5] is incremented, so c1[4] becomes 1.
// i = 5: c1[5 % 5] is incremented, so c1[0] becomes 1.
// i = 6: c1[6 % 5] is incremented, so c1[1] becomes 2.
// i = 7: c1[7 % 5] is incremented, so c1[2] becomes 2.
// i = 8: c1[8 % 5] is incremented, so c1[3] becomes 2.
// i = 9: c1[9 % 5] is incremented, so c1[4] becomes 2.
// i = 10: c1[10 % 5] is incremented, so c1[0] becomes 2.
// i = 11: c1[11 % 5] is incremented, so c1[1] becomes 3.
// i = 12: c1[12 % 5] is incremented, so c1[2] becomes 3.
// i = 13: c1[13 % 5] is incremented, so c1[3] becomes 3.
// i = 14: c1[14 % 5] is incremented, so c1[4] becomes 3.
// i = 15: c1[15 % 5] is incremented, so c1[0] becomes 3.
// i = 16: c1[16 % 5] is incremented, so c1[1] becomes 4.
// i = 17: c1[17 % 5] is incremented, so c1[2] becomes 4.
// i = 18: c1[18 % 5] is incremented, so c1[3] becomes 4.
// After this loop, the c1 array would be {3, 4, 4, 4, 3}.