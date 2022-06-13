#include <stdio.h>
int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  if (x > y) printf("%d é maior.\n", x);
  else if (y > x) printf("%d é maior.\n", y);
  else printf("Ambos são iguais.\n");
  return 0;
}
