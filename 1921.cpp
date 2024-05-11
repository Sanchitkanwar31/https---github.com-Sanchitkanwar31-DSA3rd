#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        

        long long n, f, a, b;
  cin >> n >> f >> a >> b;
  vector <long long > arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
    }
      long long ans = 0;
  long long result=0;
  for (int i = 0; i < n; i++)
  {
    ans= min(b, abs(arr[i] - result) * a);
    f -= ans;
    result = arr[i];
  }
  if (f > 0) 
  cout << "YES"<<endl;
  else 
  cout << "NO"<<endl;
    }
    return 0;
}
