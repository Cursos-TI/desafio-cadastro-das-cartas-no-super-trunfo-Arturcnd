#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Declaração das variáveis das cartas
    char estado1,estado2;
    char codcarta1[3], codcarta2[3];
    char nomecidade1[20], nomecidade2[20];
    int npopulacao1, npopulacao2;
    float areacidade1, areacidade2;
    float pibcidade1, pibcidade2;
    int npontostur1, npontostur2;

    //insercao dados carta1
    printf("Informações da Carta1 \n");
    printf("Digite o Estado da Carta1: \n");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta1: \n");
    scanf(" %s", &codcarta1);
    printf("Digite a Cidade da Carta1: \n");
    scanf(" %[^\n]", &nomecidade1);
    printf("Digite a  Número da População da Carta1: \n");
    scanf("%d", &npopulacao1);
    printf("Digite o Área da Cidade em Km² da Carta1: \n");
    scanf("%f", &areacidade1);
    printf("Digite o PIB da Cidade da Carta1: \n");
    scanf("%f", &pibcidade1);
    printf("Digite o Número de Pontos Turísticos da Carta1: \n");
    scanf("%d", &npontostur1);
    printf("\n");

    //insercao dados carta2
    printf("Informações da Carta2 \n");
    printf("Digite o Estado da Carta2: \n");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta2: \n");
    scanf(" %s", &codcarta2);
    printf("Digite a Cidade da Carta2: \n");
    scanf(" %[^\n]", &nomecidade2);
    printf("Digite a  Número da População da Carta2: \n");
    scanf("%d", &npopulacao2);
    printf("Digite o Área da Cidade em Km² da Carta2: \n");
    scanf("%f", &areacidade2);
    printf("Digite o PIB da Cidade da Carta2: \n");
    scanf("%f", &pibcidade2);
    printf("Digite o Número de Pontos Turísticos da Carta2: \n");
    scanf("%d", &npontostur2);
    printf("\n");

    //Impressao em tela das informações da Carta 1 e Carta 2
    printf("Info Carta1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codcarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", npopulacao1);
    printf("Área em Km²: %f\n", areacidade1);
    printf("PIB: %f\n", pibcidade1);
    printf("Número de Pontos Turísticos: %d\n", npontostur1);
    printf("\n");

    printf("Info Carta2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codcarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", npopulacao2);
    printf("Área em Km²: %f\n", areacidade2);
    printf("PIB: %f\n", pibcidade2);
    printf("Número de Pontos Turísticos: %d\n", npontostur2);

    return 0;
}
