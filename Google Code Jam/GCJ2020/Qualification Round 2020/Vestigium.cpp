#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, tt;
  cin >> t;
  for (tt = 1; tt <= t; ++tt) {
    int n, i, j, r = 0, c = 0, d = 0, found = 0, temp = 0;
    cin >> n;
    int a[n][n], rc[101], cc[101];
    for(i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        cin >> a[i][j];
        if (i == j) {
          d += a[i][j];
        }
      }
    }
    for(i = 0; i < n; i++) {
      memset(rc, 0, sizeof(rc));
      for (j = 0; j < n; j++) {
        temp = a[i][j];
        rc[temp]++;
        if (rc[temp] > 1) {
          r++;
          break;
        }
      }
    }
    for(i = 0; i < n; i++) {
      memset(cc, 0, sizeof(cc));
      for (j = 0; j < n; j++) {
        temp = a[j][i];
        cc[temp]++;
        if (cc[temp] > 1) {
          c++;
          break;
        }
      }
    }
    cout << "Case #" << tt << ": " << d << " " << r << " " << c << " "<< endl;
  }
  return 0;
}
