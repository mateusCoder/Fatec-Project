#include <stdio.h>
#include <stdlib.h>
#include "carrinho.h"

void inicializarCarrinho(Carrinho *c[], int tamanho){
    for(int i=0; i<tamanho; i++){
        c[i] = NULL;
    }
}

void cadastrarCarrinho(Carrinho *c[], int posicao){
    c[posicao] = (Carrinho*) malloc(sizeof(Carrinho));

    fflush(stdin);
    printf("Digite o codigo do carrinho: \n");
    scanf("%d", &c[posicao]->codigo);

    fflush(stdin);
    printf("Digite a data de hoje: \n");
    scanf("%[^\n]", c[posicao]->data);

    printf("Carrinho cadastrado com sucesso! \n");
}

