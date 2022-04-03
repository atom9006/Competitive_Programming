#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld; //%Lf

#define MOD 1000000007

int mn(int a, int b, int c) {
  return (min(min(a, b), c));
}

int main(void) {
  int t, tt;
  cin >> t;
  for (tt = 1; tt <= t; tt++) {
    int c, m, y, k, tat = 1000000, cc = 0, cm = 0, cy = 0, ck = 0, i;
    int ac[3], am[3], ay[3], ak[3];
    for (i = 0; i < 3; i++) {
      cin >> ac[i] >> am[i] >> ay[i] >> ak[i];
    }
    c = mn(ac[0], ac[1], ac[2]);
    m = mn(am[0], am[1], am[2]);
    y = mn(ay[0], ay[1], ay[2]);
    k = mn(ak[0], ak[1], ak[2]);
    cc = min(c, 1000000);
    if (cc < 1000000) {
      if (cc + m > 1000000) {
        cm = 1000000 - cc;
      } else {
        cm = m;
      }
    }
    if (cc + cm < 1000000) {
      if (cc + cm + y > 1000000) {
        cy = 1000000 - (cc + cm);
      } else {
        cy = y;
      }
    }
    if (cc + cm + cy < 1000000) {
      if (cc + cm + cy + k > 1000000) {
        ck = 1000000 - (cc + cm + cy);
      } else {
        ck = k;
      }
    }
    if (cc + cm + cy + ck == 1000000) {
      cout << "Case #" << tt << ": " << cc << " " << cm << " " << cy << " " << ck << endl;
    } else {
      cout << "Case #" << tt << ": " << "IMPOSSIBLE" << endl;
    }
  }
  return 0;
}
