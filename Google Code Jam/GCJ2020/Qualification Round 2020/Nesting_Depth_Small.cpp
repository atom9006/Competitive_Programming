#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, tt;
  cin >> t;
  for (tt = 1; tt <= t; ++tt) {
    int i, j, o = 0, z = 0, f = 0;
    string s, temp = "";
    cin >> s;
    for (i = 0; i < s.size(); i++) {
      if (s[i] == '1') {
        if (f == 0) {
          f = 1;
          temp += '(';
        }
        temp += '1';
      } else {
        if (f == 1) {
          temp += ')';
          f = 0;
        }
        temp += '0';
      }
      if (i == s.size() - 1 && f == 1) {
        temp += ')';
      }
    }
    cout << "Case #" << tt << ": " << temp << endl;
  }
  return 0;
}

