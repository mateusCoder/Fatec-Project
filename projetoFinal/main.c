#include <stdio.h>
#include <stdlib.h>
#define T 1000
#include "produto.h"
#include "carrinho.h"

int main(){

    Produto * vetProd[T];
    inicializar(vetProd, T);

    Carrinho * vetCar[T];
    inicializar(vetCar, T);

    int pos = 0;
    int opc = 0;
    int codproc = 0;
    int qtd = 0;
    do{
        printf("\n Menu Principal\n");
        printf("1. Cadastrar\n");
        printf("2. Procurar\n");
        printf("3. Comprar\n");
        printf("4. Vender\n");
        printf("5. Listar\n");
        printf("9. Fim\n\n");
        printf("Digite sua opcao\n");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                cadastrar(vetProd, pos);
                cadastrarCarrinho(vetCar, pos);
                pos++;
                break;
            case 2:
                fflush(stdin);
                printf("Digite o codigo do produto a procurar \n");
                scanf("%d", &codproc);
                procurar(vetProd, pos, codproc);
                break;
            case 3:
                fflush(stdin);
                printf("Digite o codigo do produto a comprar \n");
                scanf("%d", &codproc);
                printf("Digite a quantidade da compra: \n");
                scanf("%d", &qtd);
                comprar(vetProd, pos, codproc, qtd);
                break;
            case 4:
                fflush(stdin);
                printf("Digite o codigo do produto a vender \n");
                scanf("%d", &codproc);
                printf("Digite a quantidade da venda: \n");
                scanf("%d", &qtd);
                vender(vetProd, pos, codproc, qtd);
                break;
            case 5:
                listar(vetProd, pos);
                break;
            case 9:
                printf("\n");
                break;
            default:
                printf("Opcao invalida \n");

        }
    }while(opc!=9);
    printf("Fim do programa \n");
    return 0;
}
