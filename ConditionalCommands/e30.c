#include <stdio.h>
int main() {
	int n[3];
	scanf("%d %d %d", &n[0], &n[1], &n[2]);
	if (n[0] < n[1] && n[1] < n[2]) printf("%d %d %d\n", n[0], n[1], n[2]);
	else if (n[1] < n[0] && n[0] < n[2]) printf("%d %d %d\n", n[1], n[0], n[2]);
	else if (n[2] < n[0] && n[0] < n[1]) printf("%d %d %d\n", n[2], n[0], n[1]);
	else if (n[2] < n[1] && n[1] < n[0]) printf("%d %d %d\n", n[2], n[1], n[0]);
	else if (n[0] < n[2] && n[2] < n[1]) printf("%d %d %d\n", n[0], n[2], n[1]);
	return 0;
}

