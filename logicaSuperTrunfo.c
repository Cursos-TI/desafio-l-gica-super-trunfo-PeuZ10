#include <stdio.h>

int main() {

    
    char nome1 [50], nome2 [50];  // Nome do estado
    char codcarta1 [30], codcarta2 [30];  // Código da carta
    char nomecidade1 [30], nomecidade2[30]; // Nome da cidade
    int populacao1, populacao2; // População
    float area1, area2; // Área de km2
    float PIB1 = 10, PIB2 = -10; // valor do PIB
    int pontosturisticos1, pontosturisticos2; // Pontos turísticos
    float densidade1, densidade2; // Densidade demográfica
    float percapita1, percapita2; // PIB per capita
    int esjogador1, esjogador2; // Escolha do jogador
    int pontos1 = 0, pontos2 = 0;

    printf("Desafio Super Trunfo\n");

    printf("*** Jogo Super Trunfo ***\n");
    printf("Escolha a primeira opção para ser comparada: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha:");
    scanf("%d", &esjogador1);

    printf("Escolha a segunda opção para ser comparada: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha:");
    scanf("%d", &esjogador2);

    printf("PRIMEIRA CARTA\n"); // Incio da primeira carta

    printf("Digite o nome do estado:\n");
    scanf("%s", nome1);

    printf("Digite o código da carta:\n");
    scanf("%s", codcarta1);
    
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área em km2:\n");
    scanf("%f", &area1);

    densidade1 = populacao1 / area1;

    printf("A densidade populacional é: %.2f habitantes por km²\n", densidade1);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);

    percapita1 = PIB1 / populacao1;

    printf("O PIB per capita é: %.2f habitantes por km²\n", percapita1);

    printf("Digite o Número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);

    printf("SEGUNDA CARTA\n"); // Incio da segunda carta

    printf("Digite o nome do estado:\n");
    scanf("%s", nome2);

    printf("Digite o código da carta:\n");
    scanf("%s", codcarta2);
    
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área em km2:\n");
    scanf("%f", &area2);

    densidade2 = populacao2 / area2;

    printf("A densidade populacional é: %.2f habitantes por km²\n", densidade2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    percapita2 = PIB2 / populacao2;

    printf("O PIB per capita é: %.2f habitantes por km²\n", percapita2);

    printf("Digite o Número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);

    

    printf("Dados da carta 01\n");

    printf("Nome do estado: %s\n", nome1);
    printf("Código da carta: %s\n", codcarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km2: %f\n", area1); 
    printf("PIB: %f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional:  %.2f habitantes por km²\n", densidade1);
    printf("PIB per capita: %.2f habitantes por km²\n", percapita1);

    printf("Dados da segunda carta\n");

    printf("Nome do estado: %s\n", nome2);
    printf("Código da carta: %s\n", codcarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km2: %f\n", area2); 
    printf("PIB: %f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional:  %.2f habitantes por km²\n", densidade2);
    printf("PIB per capita: %.2f habitantes por km²\n", percapita2); 

     switch (esjogador1) {
    case 1: // População
        if (populacao1 > populacao2) pontos1++;
        else if (populacao2 > populacao1) pontos2++;
        break;
    case 2: // Área
        if (area1 > area2) pontos1++;
        else if (area2 > area1) pontos2++;
        break;
    case 3: // PIB
        if (PIB1 > PIB2) pontos1++;
        else if (PIB2 > PIB1) pontos2++;
        break;
    case 4: // Pontos turísticos
        if (pontosturisticos1 > pontosturisticos2) pontos1++;
        else if (pontosturisticos2 > pontosturisticos1) pontos2++;
        break;
    case 5: // Densidade demográfica (MENOR vence)
        if (densidade1 < densidade2) pontos1++;
        else if (densidade2 < densidade1) pontos2++;
        break;
    default:
        printf("Escolha inválida. Nenhum ponto atribuído.\n");
        break;
}

switch (esjogador2) {
    case 1: // População
        if (populacao1 > populacao2) pontos1++;
        else if (populacao2 > populacao1) pontos2++;
        break;
    case 2: // Área
        if (area1 > area2) pontos1++;
        else if (area2 > area1) pontos2++;
        break;
    case 3: // PIB
        if (PIB1 > PIB2) pontos1++;
        else if (PIB2 > PIB1) pontos2++;
        break;
    case 4: // Pontos turísticos
        if (pontosturisticos1 > pontosturisticos2) pontos1++;
        else if (pontosturisticos2 > pontosturisticos1) pontos2++;
        break;
    case 5: // Densidade demográfica (MENOR vence)
        if (densidade1 < densidade2) pontos1++;
        else if (densidade2 < densidade1) pontos2++;
        break;
    default:
        printf("Escolha inválida. Nenhum ponto atribuído.\n");
        break;
}

    // Resultado final
    printf("\nPontuação Final:\n");
    printf("%s: %d ponto(s)\n", nome1, pontos1);
    printf("%s: %d ponto(s)\n", nome2, pontos2);

    if (pontos1 > pontos2) {
        printf("🏆 VENCEDOR: %s!\n", nome1);
    } else if (pontos2 > pontos1) {
        printf("🏆 VENCEDOR: %s!\n", nome2);
    } else {
        printf("🤝 EMPATE!\n");
    }