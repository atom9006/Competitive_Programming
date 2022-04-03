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

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void) {
  int t, tt;
  scanf("%d", &t);
  for (tt = 1; tt <= t; tt++) {
    int n, l, i;
    int a[50], ans[26];
    scanf("%d %d", &n, &l);
    for (i = 0; i < l; i++) {
      scanf("%d", &a[i]);
    }
    qsort(a, l, sizeof(int), cmpfunc);
    for (i = 0; i < l; i++) {
      printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < l - 1; i++) {
      printf("%d ", a[i + 1] - a[i]);
    }
  //  printf("Case #%d: %d %d\n", tt, tempb, (tempa - tempb));
  }
  return 0;
}
