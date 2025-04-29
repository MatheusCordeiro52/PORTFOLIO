#include <stdio.h>

int main() {
//variavel para o menu interativo
   int menuInterativo;
   int vitoriasCarta1 = 0, vitoriasCarta2 = 0;
//variaveis da carta1 e carta 2
   char Estado[50], Estado2[50];
   char codigoCidade[3], codigoCidade2[3];
   char nomeCidade[50], nomeCidade2[50];
   long int populacao, populacao2;
   float area, area2;
   float pib, pib2;
   int pontoTuristico, pontoTuristico2;
   float densidadePopulacional, densidadePopulacional2;
   float pibPerCapita, pibPerCapita2;
   long int superPoder,superPoder2;
//Entrada de dados carta 1
            printf("-=DADOS DA PRIMEIRA CARTA=-\n");
            printf("Digite o código do estado de A a H: \n"); 
            scanf(" %s", Estado);
            printf("Digite o código da cidade de 01 a 04:\n");
            scanf("%s", codigoCidade);
            printf("Digite o nome da cidade:\n");
            scanf(" %[^\n]", nomeCidade);
            printf("Digite a população da cidade:\n");
            scanf("%ld", &populacao);
            printf("Digite a área da cidade em KM²:\n");
            scanf("%f", &area);
            printf("Digite o PIB da cidade\n");
            scanf("%f", &pib);
            printf("Digite a quantidade de pontos turisticos da cidade:\n"); 
            scanf("%d", &pontoTuristico);
            printf("\n");
      
//Calculo de densidade populacional carta 1
         densidadePopulacional = ((float)populacao / area);
//Calculo de PIB per capita carta 1
         pibPerCapita = (pib / populacao);
//Calculo do Super Poder carta 1
         superPoder = (populacao + (int)area + (int)pib + pontoTuristico + (int)densidadePopulacional + (int)pibPerCapita);
      
//Entrada de dados carta 2
            printf("-=DADOS DA SEGUNDA CARTA=-\n");
            printf("Digite o código do Estado de A a H: \n");
            scanf(" %s", Estado2);
            printf("Digite o código da cidade de 01 a 04:\n");
            scanf("%s", codigoCidade2);
            printf("Digite o nome da cidade:\n");
            scanf(" %[^\n]", nomeCidade2);
            printf("Digite a população da cidade:\n");
            scanf("%ld", &populacao2);
            printf("Digite a área da cidade em KM²:\n");
            scanf("%f", &area2);
            printf("Digite o PIB da cidade\n");
            scanf("%f", &pib2);
            printf("Digite a quantidade de pontos turisticos da cidade:\n");
            scanf("%d", &pontoTuristico2);
            printf("\n");

//Calculo de densidade populacional carta 2
         densidadePopulacional2 = ((float)populacao2 / area2);
//Calculo de PIB per capita carta 2
         pibPerCapita2 = (pib2/ populacao2);
//Calculo do Super Poder carta 2
         superPoder2 = (populacao2 + (int)area2 + (int)pib2 + pontoTuristico2 + (int)densidadePopulacional2 + (int)pibPerCapita2);
      
//saida com os dados e suas descrições carta 1
         printf("-=DADOS PRIMEIRA CARTA=-\n");
         printf("CÓDIGO DA CARTA: %s%s\n", Estado, codigoCidade);
         printf("NOME DA CIDADE: %s\n", nomeCidade);
         printf("POPULAÇÃO DA CIDADE: %ld\n", populacao);
         printf("ÁREA DA CIDADE: %.2f KM²\n", area);
         printf("PIB DA CIDADE: %.2f BILHÕES \n", pib);
         printf("QUANTIDADE DE PONTOS TURISTICOS NA CIDADE: %d\n", pontoTuristico);
         printf("DENSIDADE POPULACIONAL: %.2f pessoas/km² \n", densidadePopulacional);
         printf("PIB per capita: %.2f reais \n", pibPerCapita);
         printf("SUPER PODER DA CARTA: %ld\n", superPoder);
         printf("\n"); 

//saida com os dados e suas descrições 2
         printf("-=DADOS SEGUNDA CARTA=-\n");        
         printf("CÓDIGO DA CARTA: %s%s\n", Estado2, codigoCidade2);
         printf("NOME DA CIDADE: %s\n", nomeCidade2);
         printf("POPULAÇÃO DA CIDADE: %ld\n", populacao2);
         printf("ÁREA DA CIDADE: %.2f KM²\n", area2);
         printf("PIB DA CIDADE: %.2f BILHÕES \n", pib2);
         printf("QUANTIDADE DE PONTOS TURISTICOS NA CIDADE: %d\n", pontoTuristico2);
         printf("DENSIDADE POPULACIONAL: %.2f pessoas/km² \n", densidadePopulacional2);
         printf("PIB per capita: %.2f reais \n", pibPerCapita2);
         printf("SUPER PODER DA CARTA: %ld\n", superPoder2);
         printf("\n");
//função para código ficar em loop para o usuario não precisar reiniciar o código
         do {
//Menu interativo para escolha de comparações
            printf("-= MENU PARA COMPARAÇÃO DE CARTAS =-.\n");
            printf("1. POPULAÇÃO.\n");
            printf("2. ÁREA.\n");
            printf("3. PIB.\n");
            printf("4. PONTOS TURISTICOS.\n");
            printf("5. DENSIDADE POPULACIONAL:\n");
            printf("6. PIB PER CAPITA:\n");
            printf("7. SUPER PODER:\n");
            printf("8. CARTA GANHADORA:\n");
            printf("9. SAIR:\n");
            scanf("%d", &menuInterativo);
            
//função para impressão de disputa das cartas com operador ternário
            switch (menuInterativo)
            {
            
            case 1: if (populacao > populacao2) {printf("CARTA 1 VENCEU!\n"),vitoriasCarta1++;
            }else if (populacao == populacao2) {printf("EMPATE!\n"); //linha para empate
            }else {printf("CARTA 2 VENCEU!\n"), vitoriasCarta2++;}
            break;
            
            case 2: if (area > area2) {printf("CARTA 1 VENCEU!\n"),vitoriasCarta1++;
            }else if (area == area2) {printf("EMPATE!\n");//linha para empate
            }else {printf("CARTA 2 VENCEU!\n"), vitoriasCarta2++;}
            
            break;
            case 3: if (pib > pib2) {printf("CARTA 1 VENCEU!\n"),vitoriasCarta1++;
            }else if (pib == pib2) {printf("EMPATE!\n");//linha para empate
            }else {printf("CARTA 2 VENCEU!\n"), vitoriasCarta2++;}
            
            break;
            case 4: if (pontoTuristico > pontoTuristico2) {printf("CARTA 1 VENCEU!\n"),vitoriasCarta1++;
            }else if (pontoTuristico == pontoTuristico2) {printf("EMPATE!\n");//linha para empate
            }else {printf("CARTA 2 VENCEU!\n"), vitoriasCarta2++;}
            break;

            case 5:if (densidadePopulacional > densidadePopulacional2) {printf("CARTA 1 VENCEU!\n"),vitoriasCarta1++;
            }else if (densidadePopulacional == densidadePopulacional2) {printf("EMPATE!\n");//linha para empate
            }else {printf("CARTA 2 VENCEU!\n"), vitoriasCarta2++;}
            break;

            case 6: if (pibPerCapita > pibPerCapita2) {printf("CARTA 1 VENCEU!\n"),vitoriasCarta1++;
            }else if (pibPerCapita2 == pibPerCapita2) {printf("EMPATE!\n");//linha para empate
            }else {printf("CARTA 2 VENCEU!\n"), vitoriasCarta2++;}
            break;

            case 7: if (superPoder > superPoder2) {printf("CARTA 1 VENCEU!\n"),vitoriasCarta1++;
            }else if (superPoder == superPoder2) {printf("EMPATE!\n");//linha para empate
            }else {printf("CARTA 2 VENCEU!\n"), vitoriasCarta2++;}
            break;

            case 8:
            printf ("\n-=CARTA GANHADORA=-\n");
            if (vitoriasCarta1 > 4){ printf("CARTA 1 VENCEU O JOGO!!\n");
            }else{ printf("CARTA 2 VENCEU O JOGO!!\n");}
            break;

            default:
            printf("SAINDO...\n");
         }
//Fim da função de loop
         } while (menuInterativo != 8);
   return 0;
}
