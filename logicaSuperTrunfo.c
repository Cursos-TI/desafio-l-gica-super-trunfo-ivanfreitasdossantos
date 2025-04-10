#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    char codigo[10], codigo2[10], nomeCidade[30], nomeCidade2[30], estado[1], estado2[1];
    int populacao, populacao2 , numPontosTuristicos, numPontosTuristicos2;
    float area, area2, PIB, PIB2, densidadePopulacional,  PIBPerCapita, densidadePopulacional2,  PIBPerCapita2;

    printf("Digite o nome Primeiro Estado: \n");
    scanf("%s", &estado);

    printf("Digite o cdigo da cidade: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade : \n");
    scanf("%s", &nomeCidade);

    printf("Digite quantidade populacional: \n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numPontosTuristicos);


    printf("Agora vamo inserir os daods de um novo estado\n");
    printf("Digite o nome  Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o cdigo da cidade: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade : \n");
    scanf("%s", &nomeCidade2);

    printf("Digite quantidade populacional: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numPontosTuristicos2);

    densidadePopulacional = populacao/area;
    PIBPerCapita =  PIB/populacao;

    densidadePopulacional2 = populacao2/area2;
    PIBPerCapita2 = PIB2/populacao2;

    printf("\n \nComparação de cartas (Atributo: População): \n");
    printf("Carta 1 - %s População: %d \n", nomeCidade, populacao);
    printf("Carta 2 - %s População: %d \n \n", nomeCidade2, populacao2);
    

    if(populacao > populacao2){
        printf("Resultado: Carta 1 %s venceu! População: %d \n", nomeCidade, populacao);
    }else{
        printf("Resultado: Carta 2 %s venceu! População: %d \n", nomeCidade2, populacao2);
    }


    return 0;
}
