/*
13- Faça  um  programa  para  pagamento  de  comissão  de  vendedores  de  peças,  levando-
se    em  consideração  que  sua  comissão  será  de  5%  do  total  da  venda  e  que  você  tem  os 
seguintes dados:  
 Identificação do vendedor  
 Código da peça  
 Preço unitário da peça  
 Quantidade vendida  
*/

#include <stdio.h>

int main(void){

double sellerId, pieceId, piecePrice;
int quantitySold;

    printf("Me traga esses dados para eu poder calcular a sua comissão =D\n");
    sleep(1);
    printf("Primeiramente , me diga seu código de vendedor :\n");
    scanf("%lf",&sellerId);
    printf("Agora ,me diga o código da peça vendida :\n");
    scanf("%lf",&pieceId);
    printf("Me diga o preço unitária dessa peça\n");
    scanf("%lf",&piecePrice);
    printf("Por ultimo , a quantidade de peças vendidas:\n");
    scanf("%i",&quantitySold);

    printf("A sua comissão será R$  %.2lf",(quantitySold*piecePrice)*0.05);

}

