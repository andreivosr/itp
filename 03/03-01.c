#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int f1, f2;
		scanf("%d %d", &f1, &f2);
		while (f2 != 0) {
			int remainder = f1 % f2;
			f1 = f2;
			f2 = remainder;
		}
		printf("%d\n", f1);
	}
	return 0;
}
