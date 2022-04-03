#include <bits/stdc++.h>
using namespace std;

void swap (int *aa, int *bb) {
  int temp = *aa;
      *aa = *bb;
      *bb = temp;
}

void bubbleSort(int a[], int b[], int c[], int n) {
  int i,j;
  bool swapped;
  for(i = 0; i < n - 1; i++) {
    swapped = false;
    for(j = 0; j < n - i - 1; j++) {
      if(a[j] > a[j + 1]) {
        swap(&a[j], &a[j + 1]);
        swap(&b[j], &b[j + 1]);
        swap(&c[j], &c[j + 1]);
        swapped = true;
      }
    }
    if (!swapped) {
      break;
    }
  }
}

string convertToString(char* a, int size)
{
    string s = a;
    return s;
}


int main() {
  int t, tt;
  cin >> t;
  for (tt = 1; tt <= t; ++tt) {
    int n, i, j, found = 0, lc = 0, lj = 0;
    cin >> n;
    string ans(n, '?');
    int s[n], e[n], c[1441] = {0};
    for (i = 0; i < n; i++) {
      cin >> s[i] >> e[i];
      c[i] = i;
    }
    bubbleSort(s, e, c, n);
    for (i = 0; i < n; i++) {
      if (lc <= s[i]) {
        ans[c[i]] = 'C';
        lc = e[i];
      } else if (lj <= s[i]) {
        ans[c[i]] = 'J';
        lj = e[i];
      } else {
        found = 1;
        break;
      }
    }
    cout << "Case #" << tt << ": " << (found ? "IMPOSSIBLE" : ans) << endl;
  }
  return 0;
}
