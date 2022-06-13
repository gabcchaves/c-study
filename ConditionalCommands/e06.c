#include <stdio.h>
#include <stdlib.h>
int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  x > y ? printf("%d", x) : printf("%d", y);
  printf("\n%d\n", abs(x - y));
}
