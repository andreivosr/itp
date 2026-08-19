#include <stdio.h>

int main() {
    float A, B, C, perimetro, semiperimetro, area;

    scanf("%f %f %f", &A, &B, &C);

    perimetro = A + B + C;
    semiperimetro = perimetro / 2;
    area = sqrt(semiperimetro * (semiperimetro - A) * (semiperimetro - B) * (semiperimetro - C));

    printf("Perimetro = %.1f\n", perimetro);
    printf("Area = %.1f\n", area);

    return 0;
}