#include <stdio.h>

/*
  Exemplo em C que explica e demonstra os principais especificadores
  de formato usados em scanf/printf.

  %d  - inteiro decimal (int)
  %i  - inteiro (interpreta base automaticamente em scanf)
  %u  - inteiro sem sinal (unsigned int)
  %f  - ponto flutuante (float) em printf; em scanf usa-se %f para float
  %lf - ponto flutuante double (double) em scanf/printf
  %c  - caractere (char)
  %s  - string (sequência de chars, termina em '\0')
  %x  - hexadecimal (int) em printf/scanf
  %o  - octal (int)
  %p  - ponteiro (endereço)

  No scanf cada % especificador espera um ponteiro para a variável onde
  o valor será armazenado: por isso usamos &var para passar o endereço.
*/

int main(void) {
    int d, i, u, x, o;
    float f;
    double lf;
    char c;
    char s[100];

    printf("Demonstração de especificadores de formato em C:\n");
    printf("Entre com: int(decimal) int(autodetect) unsigned int float double char string hex octal\n");
    printf("Exemplo de entrada (separados por espaços): 42 010 123 3.14 2.71828 A hello 2A 52\n");
    printf("Digite os valores agora:\n");

    /* Lê várias coisas; cada % espera um ponteiro (&var) */
    if (scanf("%d %i %u %f %lf %c %99s %x %o", &d, &i, &u, &f, &lf, &c, s, &x, &o) < 9) {
        printf("Entrada insuficiente ou inválida.\n");
        return 1;
    }

    printf("\nValores lidos e como são impressos com vários especificadores:\n");
    printf("%%d   (decimal int)        : %d\n", d);
    printf("%%i   (int, scanf autodetect): %i\n", i);
    printf("%%u   (unsigned int)       : %u\n", u);
    printf("%%f   (float)              : %f\n", f);
    printf("%%lf  (double)             : %lf\n", lf);
    printf("%%c   (char)               : %c (codigo %d)\n", c, (int)c);
    printf("%%s   (string)             : %s\n", s);
    printf("%%x   (hexadecimal)        : %x (decimal %d)\n", x, x);
    printf("%%o   (octal)              : %o (decimal %d)\n", o, o);

    printf("\nObservações:\n");
    printf(" - No scanf sempre passe o endereço: &variavel.\n");
    printf(" - Para strings reserve espaço e use %s com largura para evitar overflow.\n");
    printf(" - %%i no scanf aceita 0x para hex e 0 para octal; %%d força decimal.\n");

    return 0;
}
