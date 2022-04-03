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
  int t;
  scanf("%d", &t);
  for (int tt = 1; tt <= t; tt++) {
    int a, b, n, i = 0, done = 0, mid;
    char s[100];
    scanf("%d %d", &a, &b);
    a++;
    scanf("%d", &n);
    while(1) {
      mid = (a + b) / 2;
      printf("%d\n", mid);
      fflush(stdout);
      scanf("%s", s);
      if (strcmp(s,"CORRECT") == 0) {
        break;
      } else if (strcmp(s, "TOO_SMALL")) {
        a = mid + 1;
      } else {
        b = mid - 1;
      }
      s[0] = '\0';
    }
  }
  return 0;
}
