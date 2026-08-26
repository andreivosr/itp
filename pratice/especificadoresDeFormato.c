#include <stdio.h>

int main() {
    // o printf usa "placeholders para cada tipo:"
    int idade = 25;
    float nota = 8.5f;
    char inicial = 'M';

    printf("idade: %d\n", idade); // %d para inteiros
    printf("nota: %.2f\n", nota); // %f para float/double
    printf("inicial: %c\n", inicial); // %c para char
    printf("nome: %s\n", "Maria"); // %s para strings
    return 0;
}