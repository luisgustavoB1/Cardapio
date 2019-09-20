#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int pedido = 1;
    int quantidade = 0;
    int quantidadeTotal = 0;
    int novoPedido;
    float desconto = 0;
    float valorcdesconto = 0;
    float somaTotal = 0;
    setlocale(LC_ALL,"Portuguese");
    system("color e0");
    // enquanto pedido for diferente de 0
    while (pedido != 0)

    {
        //Menu para seleção de pedidos
        printf("              ********* MENU **********                  \n");
        printf("              *  Especifição            Codigo                  Preço   *                  \n");
        printf("              *  Cachorro Quente          100                   1.20    *   Descontos            \n");
        printf("              *  Bauru Simples            101                   1.30    *   Acima de 10 reais 10 porcento  \n");
        printf("              *  Bauru com Ovo            102                   1.50    *   Acima de 20 reais 20 porcento  \n");
        printf("              *  Hamburguer               103                   1.20    *   Acima de 30 reais 30 porcento  \n");
        printf("              *  Cheeseburguer            104                   1.70    *                  \n");
        printf("              *  Suco                     105                   2.20    *                  \n");
        printf("              *  Refrigerante             106                   1.00    *                  \n");
        printf("              *  Fechar pedido             1                            *                  \n");
        printf("              *  Sair do programa          0                            *                  \n");
        printf("              *********************                  \n");


        printf("\n Digite o codigo do pedido? \n");
        scanf ("%d",&pedido);

        system("clear");

        if (somaTotal >= 30)
        {
            desconto= (somaTotal*0.3);
        }
        else if (somaTotal >= 20)
        {
            desconto= (somaTotal*0.2);
        }
        else if (somaTotal >= 10)
        {
            desconto= (somaTotal*0.1);
        }
        valorcdesconto = somaTotal - desconto;


     if(pedido == 1){
            //Mata o while
            pedido = 0;
            printf("Seu pedido de %d itens ficou em R$ %.2f com o desconto %.2f Reais . \n",quantidadeTotal,somaTotal,desconto);
            printf("Valor com desconto %.2f reais.\n",valorcdesconto);
            printf("Pedido finalizado com sucesso!\n");
            printf("Deseja fazer um  novo pedido digite 1 para sim  e 2 para nao.\n");
            scanf("%d",&novoPedido);
            if (novoPedido ==1){
                pedido = 1;
                somaTotal=0;
                quantidade=0;
                quantidadeTotal=0;
                desconto=0;
                system("clear");

            }
            else {(novoPedido ==2 );
                system("clear");
                printf("obrigado pelo pedido!\n");
                printf("Aperte a tecla enter para fechar o programa!\n");

            }






    }else{
        printf("\n Digite a quantidade de itens? \n");
        scanf ("%d",&quantidade);
        system("clear");
    }

    quantidadeTotal += quantidade;

    if( pedido == 100)
    {
        somaTotal += 1.2 * quantidade;
    }
    else if (pedido == 101)
    {
        somaTotal += 1.3 * quantidade;
    }
    else if (pedido == 102)
    {
        somaTotal += 1.5 * quantidade;
    }
    else if (pedido == 103)
    {
        somaTotal += 1.2 * quantidade;
    }
    else if (pedido == 104)
    {
        somaTotal += 1.7 * quantidade;
    }
    else if (pedido == 105)
    {
        somaTotal += 2.2 * quantidade;
    }
    else if (pedido == 106)
    {
        somaTotal += 1.0 * quantidade;
    }





}
return 0;
}
