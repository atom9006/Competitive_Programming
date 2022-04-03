#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, tt;
  cin >> t;
  for (tt = 1; tt <= t; ++tt) {
    int i, depth = 0, newdepth;
    string s, ans;
    cin >> s;
    for (auto c: s) {
      newdepth = c - '0';
      while (newdepth > depth) {
        ++depth;
        ans += '(';
      }
      while (newdepth < depth) {
        --depth;
        ans += ')';
      }
      ans += c;
    }
    while (depth > 0) {
      --depth;
      ans += ')';
    }
    cout << "Case #" << tt << ": " << ans << endl;
  }
  return 0;
}
