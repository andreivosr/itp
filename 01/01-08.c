#include <stdio.h>

int main() {
    int codigo1, quantidade1;
    double precoUnidade1;

    int codigo2, quantidade2;
    double precoUnidade2;

    scanf("%d %d %lf", &codigo1, &quantidade1, &precoUnidade1);
    scanf("%d %d %lf", &codigo2, &quantidade2, &precoUnidade2);

    double total = (quantidade1 * precoUnidade1) + (quantidade2 * precoUnidade2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
}