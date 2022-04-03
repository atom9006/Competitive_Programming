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
    int r, c, i, j;
    cin >> r >> c;
    char a[105][105];
    memset(a, '.', sizeof(a));
    for (i = 0; i <= 100; i += 2) {
      for (j = 0; j <= 100; j += 2) {
        a[i][j] = '+';
      }
    }
    for (i = 0; i <= 100; i += 2) {
      for (j = 1; j <= 100; j += 2) {
        a[i][j] = '-';
      }
    }
    for (i = 1; i <= 100; i += 2) {
      for (j = 0; j <= 100; j += 2) {
        a[i][j] = '|';
      }
    }
    a[0][0] = '.';
    a[0][1] = '.';
    a[1][0] = '.';
    a[1][1] = '.';
    cout << "Case #" << tt << ": " << endl;
    for (i = 0; i < 2 * r + 1; i++) {
      for (j = 0; j < 2 * c + 1; j++) {
        cout << a[i][j];
      }
      cout << endl;
    }
  }
  return 0;
}
