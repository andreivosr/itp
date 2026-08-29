#include <stdio.h>

int main() {
    int x;
    int z = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0){
            z++;
        }
    }
    printf("%d valores pares\n", z);
    return 0;
}