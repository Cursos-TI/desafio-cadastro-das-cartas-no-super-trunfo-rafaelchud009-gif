#include <stdio.h>
int main() {

    printf ("=================== COMO JOGAR =====================\n");
    printf("1. Observe, para o Super Trunfo escolhido, qual valor vence em cada característica: se o menor ou o maior valor.\n");
    printf("2. Para iniciar, escolha entre as informações da sua carta, aquela que você julga ter o valor capaz de vencer as cartas dos seus adversários.\n\n");

    char Estado[3];      // exemplo: "SP", "RJ"
    char carta[3];     // exemplo: "carta1", "carta2"
    char cidade[20];
    int habitantes;
    double area; 
    float pib;   
    int citypoints;
     
    printf("Digite o estado (sigla): ");
        scanf("%2s", Estado);
    
    printf("digite o numero da carta: ");
          scanf("%s", carta);
    
    printf("Digite o nome da cidade: ");
          scanf("%19s", cidade);
    
    printf("Digite o numero de habitantes: ");  
         scanf("%d", &habitantes);
    
    printf("Digite a area em km2:");
         scanf("%lf", &area);
    
    printf("Digite o PIB (em milhões) : ");
        scanf("%f", &pib);
    
    printf("Digite os citypoints: ");
         scanf("%i", &citypoints);

            printf("\n\n=================== CARTA JOGADA =====================\n");
    printf("Estado: %s\n", Estado);
    printf("Carta: %s\n", carta);
    printf("Cidade: %s\n", cidade);
    printf("Habitantes: %d\n", habitantes);
    printf("Area: %.2lf km2\n", area);
    printf("PIB: %.2f, milhões\n", pib);
    printf("Citypoints: %d\n", citypoints);
    printf("========================================================\n");

    printf("\n\n=================== CARTA 2 =====================\n");

      printf("Digite o estado (sigla): "); //exemoli "SP", "RJ"
        scanf("%2s", Estado);
    
    printf("digite o numero da carta: "); // exemplo: '01' , '02'
          scanf("%s", carta);
    
    printf("Digite o nome da cidade: ");
          scanf("%19s", cidade);
    
    printf("Digite o numero de habitantes: ");   // exemplo: 1000000, 5000000
         scanf("%d", &habitantes);
    
    printf("Digite a area em km2:");    // exemplo: 1000 km2, 2000 km2
         scanf("%lf", &area);
    
    printf("Digite o PIB (em milhões) : "); // exemplo: 50 , 100
        scanf("%f", &pib);
    
    printf("Digite os citypoints: "); // exemplo: 10, 20
         scanf("%i", &citypoints);

    printf("\n\n=================== CARTA JOGADA =====================\n");
    printf("Estado: %s\n", Estado);
    printf("Carta: %s\n", carta);
    printf("Cidade: %s\n", cidade);
    printf("Habitantes: %d\n", habitantes);
    printf("Area: %.2lf km2\n", area);
    printf("PIB: %.2f, milhões\n", pib);
    printf("Citypoints: %d\n", citypoints);
    printf("========================================================\n");

    printf("\n\n=================== FIM DO JOGO =====================\n");
    printf("Obrigado por jogar Super Trunfo!\n");
    printf("Esperamos que tenha se divertido!\n");
    printf("========================================================\n");       

    
 
  

    return 0;
}