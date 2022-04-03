#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld; //%Lf

#define MOD 1000000007

int main(void) {
  int t, tt;
  cin >> t;
  for (tt = 1; tt <= t; tt++) {
    int n, i, ans = 0, cnt = 1;
    cin >> n;
    int s[n];
    for (i = 0; i < n; i++) {
      cin >> s[i];
    }
    sort(s, s + n);
    for (i = 0; i < n; i++) {
      if (cnt <= s[i]) {
        ans++;
        cnt++;
      }
    }
    cout << "Case #" << tt << ": " << ans << endl;
  }
  return 0;
}
