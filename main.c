#include <stdio.h>
#include <stdlib.h>
/*Uma fábrica produz e vende vários produtos e para cada um deles têm
se:
• Produto 1:
- Quantidade Produzida;
- Quantidade Vendida.
• Produto 2:
- Quantidade Produzida;
- Quantidade Vendida.
Criar um programa que mostre para cada produto, a quantidade no
estoque e uma mensagem se o produto tiver menos de 50 itens no
estoque.
Cálculo:
Quantidade estoque = quantidade produzida – quantidade vendida*/
/*desenvolvedor; @fischerxp*/

int main()
{
    int produto1;
    int quantidadeproduzida1;
    int quantidadevendida1;
    int produto2;
    int quantidadeproduzida2;
    int quantidadevendida2;
    printf("informe quantidade produzida do produto 1: ");
    scanf("%d",&quantidadeproduzida1);
    printf("\ninforme quantidade vendida do produto 1: ");
    scanf("%d",&quantidadevendida1);
    printf("\ninforme quantidade produzida do produto 2: ");
    scanf("%d",&quantidadeproduzida2);
    printf("\ninforme quantidade vendida do produto 2: ");
    scanf("%d",&quantidadevendida2);
    produto1=quantidadeproduzida1-quantidadevendida1;
    produto2=quantidadeproduzida2-quantidadevendida2;
    printf("\nprimeiro produto: %d \nsegundo produto:%d",produto1,produto2);
        if (produto1<50)
            printf("\nQUANTIDADE DO PRODUTO 1 MENOS DE 50");
        if (produto2<50)
            printf("\nQUANTIDADE DO PRODUTO 2 MENOS DE 50");
    return 0;
}
