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
    int i = 0, j = 0, n, x, y, ans = 0, anscj, ansjc;
    string s, prev, ssc = "", ssj = "";
    cin >> x >> y >> s;
    for (i = 0; i < s.size();) {
      if (s[i] == 'C' && s[i + 1] == 'J') {
        ans += x;
        i++;
      } else if (s[i] == 'J' && s[i + 1] == 'C') {
        ans += y;
        i++;
      } else if (s[i] == 'C' || s[i] == 'J') {
        // prev = s[i];
        i++;
      } else {
        // if (s[i + 1] == '?') {
          ssc = s;
          ssj = s;
          anscj = ans;
          ansjc = ans;
          for (j = i; j < s.size(); j++) {
            if (s[j] != '?') {
              ssc[j] = s[j];
              ssj[j] = s[j];
              if (ssc[j - 1] == 'J' && ssc[j] == 'C') {
                ansjc += y;
              }
              if (ssj[j - 1] == 'C' && ssj[j] == 'J') {
                anscj += x;
              }
              if (ssc[j - 1] == 'C' && ssc[j] == 'J') {
                ansjc += x;
              }
              if (ssj[j - 1] == 'J' && ssj[j] == 'C') {
                anscj += y;
              }
              i = j;
              break;
            } else {
              ssc[j] = 'C';
              ssj[j] = 'J';
              if (ssc[j - 1] == 'J' && ssc[j] == 'C') {
                ansjc += y;
              }
              if (ssj[j - 1] == 'C' && ssj[j] == 'J') {
                anscj += x;
              }
              if (ssc[j - 1] == 'C' && ssc[j] == 'J') {
                ansjc += x;
              }
              if (ssj[j - 1] == 'J' && ssj[j] == 'C') {
                anscj += y;
              }
            }
          }
          if (ansjc < anscj) {
            s = ssc;
            ans = ansjc;
          } else {
            s = ssj;
            ans = anscj;
          }
        // }
      }
    }

    // cout << "Case #" << tt << ": " << s << " " << ans << endl;
    cout << "Case #" << tt << ": " << ans << endl;
  }
  return 0;
}
