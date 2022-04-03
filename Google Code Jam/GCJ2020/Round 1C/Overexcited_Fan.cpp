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
    int i, j, n, x, y, ans = 1;
    bool fnd = false;
    string s;
    cin >> x >> y >> s;
    for (auto c: s) {
      if (c == 'N') {
        y++;
      }
      if (c == 'S') {
        y--;
      }
      if (c == 'W') {
        x--;
      }
      if (c == 'E') {
        x++;
      }
      if (abs(x) + abs(y) <= ans) {
        fnd = true;
        break;
      }
      ans++;
    }
    cout << "Case #" << tt << ": ";
    if (fnd) {
      cout << ans;
    } else {
      cout << "IMPOSSIBLE";
    }
    cout << endl;
  }
  return 0;
}
