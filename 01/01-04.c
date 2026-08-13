#include <stdio.h>

int main() {
    double A, B, M;
    scanf("%lf %lf", &A, &B);
    M = (A * 3.5 + B * 7.5) / (3.5 + 7.5);
    printf("MEDIA = %.5lf\n", M);
    return 0;
}