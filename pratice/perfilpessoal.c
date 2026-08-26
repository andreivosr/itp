#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float peso;
    double altura;
    scanf("%s %d %f %lf", nome, &idade, &peso, &altura);
    float imc = peso / ( altura * altura);
    int idadeEmDias = idade * 365;
    int idadeEmMeses = idade * 12;

    printf("=== Perfil Pessoal ===\n");
    printf("Nome: %s\n", nome);
    printf("IMC: %.2f\n", imc);
    printf("idade em dias: %d\n", idadeEmDias);
    printf("idade em meses: %d\n", idadeEmMeses);
    return 0;
}