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

    // Para densidade
    if (carta1.area != 0) {
    carta1.densidadePopulacional = (float)carta1.populacao / carta1.area;
    } 
    else {
    carta1.densidadePopulacional = 0; // Ou algum outro tratamento para área zero
    }
    // Para PIB per Capita
    if (carta1.populacao != 0) {
    carta1.pibPerCapita = (carta1.pib * 1000000000.0) / (float)carta1.populacao;
    } 
    else {
    carta1.pibPerCapita = 0; // Ou tratamento para população zero
    }

    // Para o termo do Super Poder
    float termo_inverso_densidade1 = 0;
    if (carta1.densidadePopulacional != 0) {
    termo_inverso_densidade1 = 1.0f / carta1.densidadePopulacional;
    }
    carta1.superPoder = (float)carta1.populacao + // Cast para float aqui para consistência na soma
                    carta1.area +
                    (carta1.pib * 1000000000.0) + // Usar o PIB em reais na soma do Super Poder
                    (float)carta1.pontosTuristicos + // Cast
                    carta1.pibPerCapita + 
                    termo_inverso_densidade1;

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

    // Para densidade
    if (carta2.area != 0) {
    carta2.densidadePopulacional = (float)carta2.populacao / carta2.area;
    } 
    else {
    carta2.densidadePopulacional = 0; // Ou algum outro tratamento para área zero
    }
    // Para PIB per Capita
    if (carta2.populacao != 0) {
    carta2.pibPerCapita = (carta2.pib * 1000000000.0) / (float)carta2.populacao;
    } 
    else {
    carta2.pibPerCapita = 0; // Ou tratamento para população zero
    }

    // Para o termo do Super Poder
    float termo_inverso_densidade2 = 0;
    if (carta2.densidadePopulacional != 0) {
    termo_inverso_densidade2 = 1.0f / carta2.densidadePopulacional;
    }
    carta2.superPoder = (float)carta2.populacao + // Cast para float aqui para consistência na soma
                    carta2.area +
                    (carta2.pib * 1000000000.0) + // Usar o PIB em reais na soma do Super Poder
                    (float)carta2.pontosTuristicos + // Cast
                    carta2.pibPerCapita + 
                    termo_inverso_densidade2;


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
