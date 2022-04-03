#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>  //for bool
#include <stdlib.h> // abs,labs,llabs
#include <limits.h>
#include <ctype.h>

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld; //%Lf

int main(void) {
  int t, tt;
  scanf("%d", &t);
  for (tt = 1; tt <= t; tt++) {
    int i, len, first = 0, ind = 0, j = 0, temp = 0;
    char n[110];
    scanf("%s", n);
    len = strlen(n);
    char nn[len];
    for (i = 0; i < len; i++) {
        if (n[i] == '4') {
            if (first == 0) {
                first = 1;
                ind = i;
            }
            n[i] = '3';
            nn[i] = '1';
        }
        else {
            nn[i] = '0';
        }
    }
    temp = len - ind;
    char ans[temp];
    for (i = ind; i < len; i++) {
        if (nn[i] == '1') {
            ans[j] = '1';
        } else {
            ans[j] = '0';
        }
        j++;
    }
    ans[temp] = '\0';
    printf("Case #%d: %s %s\n", tt, n, ans);
  }
  return 0;
}
