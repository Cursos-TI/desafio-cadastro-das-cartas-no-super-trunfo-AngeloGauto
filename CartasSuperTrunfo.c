#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
        //declaração de variaveis carta 1
        char estado1;
        char opcao;
        char codigocarta1 [4];
        char cidade1 [10];
        int populacao1;
        float area1; 
        float pib1;
        int numturismo1;
        

        
        //declaração de variaveis carta 2
        char estado2;
        char codigocarta2 [4];
        char cidade2 [10];
        int populacao2;
        float area2; 
        float pib2;
        int numturismo2;
        


        //recolhe dados da primeira carta
        printf ("Olá, vamos jogar super trunfo ? digite os dados de sua primeira carta. \n");
        printf ("Digite uma letra de A a H representando seu estado: ");
        scanf (" %c", &estado1);
        printf ("Digite código da carta, letra do estado mais numero de 01 a 04: ");
        scanf ("%s", codigocarta1);
        printf ("Digite sua cidade: ");
        scanf ("%s", cidade1);
        printf ("Digite a populacao de sua cidade: ");
        scanf ("%f", &populacao1);
        printf ("Digite a area de sua cidade em km²: ");
        scanf ("%f", &area1);
        printf ("Digite o PIB da cidade: ");
        scanf ("%f", &pib1);
        printf ("Digite numero de pontos turisticos da cidade: ");
        scanf ("%d", &numturismo1);

        //recolhe dados da segunda carta
        printf("\n");
        printf ("Digite os dados de sua segunda carta. \n");
        printf ("Digite uma letra de A a H representando seu estado: ");
        scanf (" %c", &estado2);
        printf ("Digite código da carta, letra do estado mais numero de 01 a 04: ");
        scanf ("%s", codigocarta2);
        printf ("Digite sua cidade: ");
        scanf ("%s", cidade2);
        printf ("Digite a populacao de sua cidade: ");
        scanf ("%f", &populacao2);
        printf ("Digite a area de sua cidade em km²: ");
        scanf ("%f", &area2);
        printf ("Digite o PIB da cidade: ");
        scanf ("%f", &pib2);
        printf ("Digite numero de pontos turisticos da cidade: ");
        scanf ("%d", &numturismo2);


        //Exibe dados da primeira carta
        printf ("\n");
        printf ("SEGUE AS CARTAS JOGADAS\n");
        printf ("\n");
        printf ("\n");
        printf ("CARTA 1 \n");
        printf ("\n");
        printf ("Estado: %c\n", estado1);
        printf ("Código Estado: %s \n", &codigocarta1); 
        printf ("Nome da Cidade: %s \n", cidade1);
        printf ("População: %d \n", populacao1);
        printf ("Area da cidade %.2f km². \n", area1);
        printf ("PIB: %.2f Bilhões de reais \n", pib1);
        printf ("Numero de pontos turisticos: %d \n", numturismo1);


        //Exibe dados da segunda carta
        printf ("\n");
        printf ("\n");
        printf ("CARTA 2 \n");
        printf ("\n");
        printf ("Estado: %c\n", estado2);
        printf ("Código Estado: %s \n", &codigocarta2); 
        printf ("Nome da Cidade: %s \n", cidade2);
        printf ("População: %d \n", populacao2);
        printf ("Area da cidade %.2f km². \n", area2);
        printf ("PIB: %.2f Bilhões de reais \n", pib2);
        printf ("Numero de pontos turisticos: %d \n", numturismo2);
        return 0;

    return 0;
}
