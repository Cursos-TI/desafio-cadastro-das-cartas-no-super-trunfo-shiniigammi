#include <stdio.h>

// estrutura das cartas
typedef struct {
    char codigo[4]; // Ex: A01, B02
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} Carta;
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    /*
    Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    */
   
    //Cadastro das Cartas:
    Carta carta1, carta2;

    printf("Cadastro de Cartas Super Trunfo: Países!\n");

    // Cadastro carta1
    printf("Carta 1\n");
    printf("Código da cidade (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área:  (em km²)");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos da carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;
    carta1.superPoder = carta1.populacao +
                        carta1.area +
                        carta1.pib +
                        carta1.pontosTuristicos +
                        carta1.pibPerCapita +
                        (1.0f / carta1.densidadePopulacional);

    // Cadastro carta2
    printf("\nCarta 2\n");
    printf("Código da cidade (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área: (em km²)");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos da carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;
    carta2.superPoder = carta2.populacao +
                        carta2.area +
                        carta2.pib +
                        carta2.pontosTuristicos +
                        carta2.pibPerCapita +
                        (1.0f / carta2.densidadePopulacional);


    // Exibição dos dados
    printf("\nCartas Cadastradas: \n");

    printf("\nCidade: %s\n", carta1.codigo);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    printf("\nCidade: %s\n", carta2.codigo);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    // Comparação atributo a atributo
    printf("\nResultado da Comparação: \n");
    printf("População: %d\n", carta1.populacao > carta2.populacao);
    printf("Área: %d\n", carta1.area > carta2.area);
    printf("PIB: %d\n", carta1.pib > carta2.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos > carta2.pontosTuristicos);
    printf("Densidade Populacional (vence o menor): %d\n", carta1.densidadePopulacional < carta2.densidadePopulacional);
    printf("PIB per Capita: %d\n", carta1.pibPerCapita > carta2.pibPerCapita);
    printf("Super Poder: %d\n", carta1.superPoder > carta2.superPoder);

    return 0;
}
