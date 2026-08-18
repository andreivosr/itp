#include <stdio.h>

int main() {
    int A, B;
    double total, preco;

    scanf("%d %d", &A, &B);

    if (A == 1) {
        preco = 4.00;
    } else if (A == 2) {
        preco = 4.50;
    } else if (A == 3) {
        preco = 5.00;
    } else if (A == 4) {
        preco = 2.00;
    } else if (A == 5) {
        preco = 1.50;
    } else {
        preco = 0.00;
    }

    total = preco * B;

    printf("Total: R$ %.2f\n", total);

    return 0;
}