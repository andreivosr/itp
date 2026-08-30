#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c;

    while (scanf("%d", &a) == 1) {
        if (a == 0) {
            break;
        }

        scanf("%d %d", &b, &c);

        int area_casa = a * b;
        int lado_terreno = (int)(sqrt((double)area_casa * 100 / c));

        printf("%d\n", lado_terreno);
    }

    return 0;
}
