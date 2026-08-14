#include <stdio.h>

int main() {
    double salario, vendas;
    char nome[50];
    scanf("%s %lf %lf", nome, &salario, &vendas);
    double total = salario + (vendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}