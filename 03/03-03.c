#include <stdio.h>

int main() {
    float x;
    int z = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &x);
        if (x > 0){
            z++;
        }
    }
    printf("%d valores positivos\n", z);
    return 0;
}