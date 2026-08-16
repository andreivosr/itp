#include <stdio.h>

// Função principal do programa
int main() {
    // Declaração de 4 variáveis inteiras: A, B, C e D
    int A, B, C, D;
    
    // Lê 4 valores inteiros do teclado e armazena nas variáveis A, B, C e D
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    // Calcula a diferença: (A multiplicado por B) menos (C multiplicado por D)
    // O resultado é armazenado na variável DIFERENCA
    int DIFERENCA = A * B - C * D;
    
    // Imprime na tela a mensagem "DIFERENCA = " seguida do valor de DIFERENCA
    printf("DIFERENCA = %d\n", DIFERENCA);
    
    // Retorna 0 indicando que o programa foi executado com sucesso
    return 0;
}
