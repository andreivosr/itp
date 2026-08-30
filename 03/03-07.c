#include <stdio.h>

int main() {
    int x, y, i, min, max, sum = 0;

    scanf("%d %d", &x, &y);

    if (x < y) {
        min = x;
        max = y;
    } else {
        min = y;
        max = x;
    }

    for (i = min + 1; i < max; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
