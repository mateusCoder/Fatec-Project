struct carrinho{
    int codigo;
    char data[10];
    double valorTotal;
};
typedef struct carrinho Carrinho;

void inicializarCarrinho(Carrinho *c[], int tamanho);

void cadastrarCarrinho(Carrinho *c[], int posicao);

