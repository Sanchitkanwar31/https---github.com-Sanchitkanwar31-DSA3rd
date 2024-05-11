#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        int cnt = 1;
        bool flag=0;
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        if (n == 1) {
            cout << cnt << endl; 
        } else {
            for (int i = 1; i <= n; i++) {
                if (A[i] == 0 && A[i - 1] == 0) {
                    cout << -1 << endl;
                    flag=1;
                    break;
                } else if ((A[i] == 1 && A[i - 1] == 1)) {
                    cnt = cnt + 5;
                } else if (A[i-1]==1 && A[i]==) {
                    cnt = cnt + 1;
                }
            }
            if(!flag)
                 cout << cnt << endl;
        }
    }
    return 0;
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(re int i(a);i<=b;++i)
#define per(i,a,b) for(re int i(a);i>=b;--i)
#define re register
#define ll long long
//#define int ll
#define y1 yyy1
inline int rd() {
	re int res = 0, f = 1;
	char xr = getchar();
	while ('0' > xr || xr > '9') {
		if (xr == '-') f = -1;
		xr = getchar();
	}
	while ('0' <= xr && xr <= '9')
		res = (res << 1) + (res << 3) + (xr ^ 48), xr = getchar();
	return res * f;
}
inline void wr(int sq) {
	if (sq < 0) putchar('-'), sq = -sq;
	if (sq > 9) wr(sq / 10);
	putchar(sq % 10 + 48);
	return ;
 }
#define int ll
int a[100001];
signed main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		rep(i, 1, n) cin >> a[i];
		bool ok = 0;
		int cnt = 1;
		if (a[1]) cnt++;
		rep(i, 2, n) {
			if (a[i] == 0 && a[i - 1] == 0) {
				cout << -1 << endl;
				ok = 1;
				break;
			}
			if (a[i] == 1 && a[i - 1] == 1)cnt += 5;
			if (a[i - 1] == 0 && a[i] == 1)cnt += 1;
		}
		if (!ok) cout << cnt << endl;
	}
	return 0;
}
