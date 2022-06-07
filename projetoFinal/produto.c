#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

void inicializar(Produto *p[], int tamanho){
    for(int i=0; i<tamanho; i++){
        p[i] = NULL;
    }
}

void cadastrar(Produto *p[], int posicao){
    p[posicao] = (Produto*) malloc(sizeof(Produto));

    fflush(stdin);
    printf("Digite o codigo do produto: \n");
    scanf("%d", &p[posicao]->codigo);

    fflush(stdin);
    printf("Digite a descricao do produto: \n");
    scanf("%[^\n]", p[posicao]->descricao);

    fflush(stdin);
    printf("Digite a quantidade em estoque inicial do produto:\n");
    scanf("%d", &p[posicao]->quantidade);

    fflush(stdin);
    printf("Digite o preco do produto: \n");
    scanf("%lf", &p[posicao]->preco);

    printf("Produto cadastrado com sucesso! \n");
}

void procurar(Produto *p[],int tamanho, int codigo){
    for(int i=0; i<tamanho; i++){
        if(p[i]->codigo == codigo){
            imprimir(p[i]);
            return;
        }
    }
    printf("Codigo nao encontrado \n");
}

void comprar(Produto *p[], int tamanho, int codigo, int qtd){
    for(int i=0; i<tamanho; i++){
        if(p[i]->codigo == codigo){
            p[i]->quantidade += qtd;
            printf("Quantidade alterada \n");
            return;
        }
    }
    printf("Codigo nao encontrado \n");
}

void vender(Produto *p[], int tamanho, int codigo, int qtd){
    for(int i=0; i<tamanho; i++){
        if(p[i]->codigo == codigo){
            p[i]->quantidade -= qtd;
            printf("Quantidade alterada \n");
            return;
        }
    }
    printf("Codigo nao encontrado \n");
}

void listar(Produto *p[], int tamanho){
    for(int i=0; i<tamanho; i++){
        imprimir(p[i]);
    }
}

void imprimir(Produto *p){
    printf("Codigo: %d \n", p->codigo);
    printf("Descricao: %s \n", p->descricao);
    printf("Quantidade: %d \n", p->quantidade);
    printf("Preco: %.2f \n", p->preco);
}
