#include <stdio.h>
#include <string.h>

// a) Definir a estrutura
struct Medicamento {
    char nome[50];
    int quantidade;
};

int main() {
    // a) Criar e preencher a estrutura
    struct Medicamento med;
strcpy(med.nome, "Paracetamol");
    med.quantidade = 100;

    // b) Criar ponteiro apontando para o endereco da estrutura
    struct Medicamento *ptr = &med;

    printf("Antes: %s - Estoque: %d\n", ptr->nome, ptr->quantidade);

    // c) Atualizar quantidade VIA PONTEIRO (sem tocar em 'med' diretamente)
    ptr->quantidade += 50;

    printf("Depois: %s - Estoque: %d\n", ptr->nome, ptr->quantidade);

    return 0;
}