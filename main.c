#include <stdio.h>
#include <string.h>

int main() {
    // Nome do programa
    printf("=====================================\n");
    printf("       🚗  Sistema PEDAgiôMETRO  🚗\n");
    printf("=====================================\n\n");

    // Declaração de variáveis
    int carros[7];  // Vetor que armazena a quantidade de carros por dia
    char dias[7][15] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"};
    int i, diaPico = 0; // diaPico armazenará o índice do dia com mais carros
    int total = 0;

    // Entrada de dados
    printf("Digite a quantidade de carros que passaram no pedágio em cada dia da semana:\n\n");

    for (i = 0; i < 7; i++) {
        printf("%s: ", dias[i]);
        scanf("%d", &carros[i]);
        total += carros[i]; // Soma para cálculo total
    }

    // Processamento — encontrar o dia com mais carros
    for (i = 1; i < 7; i++) {
        if (carros[i] > carros[diaPico]) {
            diaPico = i;
        }
    }

    // Saída formatada
    printf("\n=====================================\n");
    printf("        RELATÓRIO SEMANAL 🚧\n");
    printf("=====================================\n");

    for (i = 0; i < 7; i++) {
        printf("%-10s : %d carros\n", dias[i], carros[i]);
    }

    printf("=====================================\n");
    printf("Total da semana: %d carros\n", total);
    printf("Media diaria: %.2f carros\n", total / 7.0);
    printf("=====================================\n");

    // Destaque do Dia de Pico
    printf("\n🚨 Dia de pico: **%s** com %d carros! 🚨\n", dias[diaPico], carros[diaPico]);

    printf("\nObrigado por usar o sistema Pedagiômetro!\n");

    return 0;
}
