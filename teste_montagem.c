#include "pilha.h" 
#include "cardapio.h"
#include "montagem.h"
#include <stdio.h>

int main(void) {
    system("cls");
    tp_pilha pilha;
    tp_ingrediente ing;

    inicializapilha(&pilha);   // ou o nome da função que inicia a pilha

    // Empilha alguns ingredientes (exemplo)
    strcpy(ing.nome, "Pao");
    push(&pilha, ing.nome);

    strcpy(ing.nome, "Carne");
    push(&pilha, ing.nome);

    strcpy(ing.nome, "Queijo");
    push(&pilha, ing.nome);
    
    strcpy(ing.nome, "Bacon");
    push(&pilha, ing.nome);

    // Agora chama a função que imprime
    print_montagem(&pilha);

    return 0;
}