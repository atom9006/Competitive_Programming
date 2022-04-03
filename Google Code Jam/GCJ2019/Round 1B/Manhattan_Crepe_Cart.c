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
    printf("Case #%d: ", tt);
    int p, q, i;
    int x[11] = {0}, y[12] = {0}, g[12][12] = {0};
    char s[12];
    scanf("%d %d", &p, &q);
    for (i = 1; i <= p; i++) {
      scanf("%d %d %c", &x[i], &y[i], &s[i]);
    }
    for (i = 1; i <= p; i++) {
      printf("%d %d %c\n", x[i], y[i], s[i]);
    }
  }
  return 0;
}
