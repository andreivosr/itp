#include <stdio.h>

int main() {
    float x;
    int z = 0;
    float somaPositivos = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &x);
        if (x > 0){
            z++;
            somaPositivos += x;
        }
    }
    float mediaPositivos = somaPositivos / z;
    printf("%d valores positivos\n", z);
    printf("%.1f\n", mediaPositivos);
    return 0;
}