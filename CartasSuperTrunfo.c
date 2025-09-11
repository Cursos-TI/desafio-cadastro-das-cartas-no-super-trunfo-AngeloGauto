#include <stdio.h>


    int main (){
        
        //declaração de variaveis das cartas
        char estado1, estado2;
        char codigocarta1 [4], codigocarta2 [4];
        char cidade1 [10], cidade2 [10];
        int populacao1, populacao2;
        float area1, area2; 
        float pib1, pib2;
        int numturismo1, numturismo2;

        //declaração variaveis calculos
        float denspopulacional1, denspopulacional2;
        float pibpercap1, pibpercap2;
        

        //recolhe dados da primeira carta
        printf ("Olá, vamos jogar super trunfo ? digite os dados de sua primeira carta. \n");
        printf ("Digite uma letra de A a H representando seu estado: ");
        scanf (" %c", &estado1);
        printf ("Digite código da carta. (letra do estado e numero de 01 a 04): ");
        scanf ("%s", codigocarta1);
        printf ("Digite sua cidade: ");
        scanf ("%s", cidade1);
        printf ("Digite a populacao de sua cidade: ");
        scanf ("%d", &populacao1);
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
        printf ("Digite código da carta. (letra do estado e numero de 01 a 04): ");
        scanf ("%s", codigocarta2);
        printf ("Digite sua cidade: ");
        scanf ("%s", cidade2);
        printf ("Digite a populacao de sua cidade: ");
        scanf ("%d", &populacao2);
        printf ("Digite a area de sua cidade em km²: ");
        scanf ("%f", &area2);
        printf ("Digite o PIB da cidade: ");
        scanf ("%f", &pib2);
        printf ("Digite numero de pontos turisticos da cidade: ");
        scanf ("%d", &numturismo2);

        //calcula densidade populacional carta 1 e 2
        denspopulacional1 = (float) populacao1 / area1;
        denspopulacional2 = (float) populacao2 / area2;

        //calcula pib per capita carta 1 e 2
        pibpercap1 = (float) pib1 / populacao1;
        pibpercap2 = (float) pib2 / populacao2;


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
        printf ("Area da Cidade %.2f km². \n", area1);
        printf ("PIB: %.2f Bilhões de Reais \n", pib1);
        printf ("Numero de Pontos Turisticos: %d \n", numturismo1);
        printf ("Densidade Populaciona: %.2f  hab/KM²\n", denspopulacional1);
        printf ("PIB per Capita: %.2f R$\n", pibpercap1);


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
        printf ("Densidade Populaciona: %.2f  hab/KM²\n", denspopulacional2);
        printf ("PIB per Capita: %.2f R$\n", pibpercap2);

        return 0;

    }
