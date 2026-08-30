#include <stdio.h>

int main() {
    int x;

    int maiorNumero;
    int posicao;
    for (int i = 1; i <= 100; i++)
    {
        scanf("%d", &x);
        if (i == 1){
            maiorNumero = x;
            posicao = i;
        }
        if (x > maiorNumero){
            maiorNumero = x;
            posicao = i;
        }
    };
    printf("%d\n", maiorNumero);
    printf("%d\n", posicao);
    return 0;
}