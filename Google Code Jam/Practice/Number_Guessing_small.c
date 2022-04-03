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
    int a, b, n, i = 0;
    char s[100];
    scanf("%d %d", &a, &b);
    scanf("%d", &n);
    for (i = 1; i <= 30; i++) {
      printf("%d\n", i);
      fflush(stdout);
      scanf("%s", s);
      if (strcmp(s,"CORRECT") == 0) {
        break;
      }
      s[0] = '\0';
    }
  }
  return 0;
}
