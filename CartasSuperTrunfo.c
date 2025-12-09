#include <stdio.h>
int main(){
    char carta1[10], carta2[10];
    int população1,população2 , nºpontos_turisticos1, nºpontos_turisticos2;
    char Estado1[10],Estado2[10], codigo1[10],codigo2[10], nome_cidade1[20], nome_cidade2[10];
    float area1, pib1, area2, pib2;
//Inicializei todas as variaveis que fazem parte do programa.

    printf("Carta 1:\n");
    printf("Digite o Estado:");
    scanf("%s",Estado1);
    printf("Digite o codigo da carta:");
    scanf("%s",codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade1);
    printf("digite o numero populacional:");
    scanf("%d",&população1);
    printf("Digite o pib:\n");
    scanf("%f",&pib1);
 
    printf("digite a area da cidade:");
    scanf("%f",&area1);
    printf("digite o numero de pontos turisticos:");
    scanf("%d",&nºpontos_turisticos1);
/*para pedir ao usuario os dados das cartas, solicitei que o valor fosse digitado a medida que fosse lido
 para cada valor, ja gravei com o scanf. pulei uma linha a partir do valor do pib*/      
    printf("Carta 2:\n");
    printf("Digite o Estado:");
    scanf("%s",Estado2);
    printf("Digite o codigo da carta:");
    scanf("%s",codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_cidade2);
    printf("digite o numero populacional:");
    scanf("%d",&população2);
    printf("Digite o pib:\n");
    scanf("%f",&pib2);
    printf("digite a area da cidade:");
    scanf("%f",&area2);
    printf("digite o numero de pontos turisticos:");
    scanf("%d",&nºpontos_turisticos2);
/*Repeti o mesmo pensamento de codigo da primeira carta para fazer a segunda carta. solicitando e lendo os valores do usuário*/

    
    
    
    
    printf("carta 1:\n - Estado:%s\n - Codigo:%s\n - nome da cidade:%s\n - população:%d\n - pib:%.5f\n - area:%.5f\n - pontos turisticos:%d\n", Estado1,codigo1,nome_cidade1,população1,pib1,area1,nºpontos_turisticos1);
    printf("carta 2:\n - Estado:%s\n - Codigo:%s\n - nome da cidade:%s\n - população:%d\n - pib:%.5f\n - area:%.5f\n - pontos turisticos:%d\n", Estado2,codigo2,nome_cidade2,população2,pib2,area2,nºpontos_turisticos2);

/*Li ao final do programa as informações dadas pelo usuario*/





    return 0;



}
