#include <stdio.h>
int main(){
    char carta1[10], carta2[10];
    int população1,população2 , nºpontos_turisticos1, nºpontos_turisticos2;
    char Estado1[10],Estado2[10], codigo1[10],codigo2[10], nome_cidade1[20], nome_cidade2[10];
    float area1, pib1, area2, pib2, densidade_populacional, pib_percapita1, densidade_populacional2,pib_percapita2;
    long double super_poder1, super_poder2;
    float resultado_area,resultado_população,resultado_pib,resultado_SP,pontos_turisticos,resultado_dp,resultado_percapita;
    //Inicializei todas as variaveis que fazem parte do programa.

    printf("Carta 1:\n");
    printf("Digite o Estado:");
    scanf("%s",Estado1);
    printf("Digite o codigo da carta:");
    scanf("%s",codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade1);
    printf("digite o numero populacional:\n");
    scanf("%d",&população1);
    printf("Digite o pib:\n");
    scanf("%f",&pib1);
 
    printf("digite a area da cidade:");
    scanf("%f",&area1);
    printf("digite o numero de pontos turisticos:");
    scanf("%d",&nºpontos_turisticos1);
/*para pedir ao usuario os dados das cartas, solicitei que o valor fosse digitado e a medida que fosse lido
 para cada valor, ja gravei com o scanf. pulei uma linha a pedirr do valor do pib*/      
    printf("Carta 2:\n");
    printf("Digite o Estado:\n");
    scanf("%s",Estado2);
    printf("Digite o codigo da carta:\n");
    scanf("%s",codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade2);
    printf("digite o numero populacional:\n");
    scanf("%d",&população2);
    printf("Digite o pib:\n");
    scanf("%f",&pib2);
    printf("digite a area da cidade:");
    scanf("%f",&area2);
    printf("digite o numero de pontos turisticos:");
    scanf("%d",&nºpontos_turisticos2);
    /*Repeti o mesmo pensamento de codigo da primeira carta para fazer a segunda carta. 
    solicitando e lendo os valores do usuário*/

    densidade_populacional= (float) população1/area1;
    densidade_populacional2 = (float) população2/area2;
    pib_percapita1 = (float) pib1/população1;
    pib_percapita2 = (float) pib2/população2;
    /*calculei a densidade populacional e o pib percapita*/

    resultado_area = area1 > area2;
    resultado_população = população1 > população2;
    resultado_pib  = pib1 > pib2;
    resultado_SP = super_poder1 > super_poder2;
    pontos_turisticos = nºpontos_turisticos1 > nºpontos_turisticos2;
    resultado_dp = densidade_populacional < densidade_populacional2;
    resultado_percapita = pib_percapita1 > pib_percapita2;
    /*Como pedido no desafio mestre aqui realizei as comparações entre as grandezas das carta 
    e armanezei na variavel resultado*/

    super_poder1 = (long double) população1 + area1 + pib1 + 1/densidade_populacional;
    super_poder2 = (long double) população2 + area2 + pib2 + 1/densidade_populacional2;
    /*calculei o super pode de cada carta separada */

    





/*Repeti o mesmo pensamento de codigo da primeira carta para fazer a segunda carta. solicitando e lendo os valores do usuário*/

    
    
    
    
    printf("carta 1:\n - Estado:%s\n - Codigo:%s\n - nome da cidade:%s\n - população:%d\n - pib:%.5f\n - area:%.5f\n - pontos turisticos:%d\n", Estado1,codigo1,nome_cidade1,população1,pib1,area1,nºpontos_turisticos1);
    printf("- A densidade populacional é:%f\n",densidade_populacional);
    printf("  O pib percapita é:%f\n", pib_percapita1);
    printf("carta 2:\n - Estado:%s\n - Codigo:%s\n - nome da cidade:%s\n - população:%d\n - pib:%.5f\n - area:%.5f\n - pontos turisticos:%d\n", Estado2,codigo2,nome_cidade2,população2,pib2,area2,nºpontos_turisticos2);
    printf("- A densidade populacional é:%f\n",densidade_populacional2);
    printf("  O pib percapita é:%f\n", pib_percapita2);
    printf("comparação cartas:\n");
    printf("- Area:%.1f\n - população: %.1f\n - pib:%.1f\n - pontos turisticos:%.1f\n - densidade populacional:%.1f\n - pib percapita:%.1f\n - super poder:%.1f\n", resultado_area,resultado_população,resultado_pib,pontos_turisticos,resultado_dp,resultado_percapita,resultado_SP);


/*Li ao final do programa as informações dadas pelo usuario*/





    return 0;



}