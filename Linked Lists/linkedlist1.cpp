#include <iostream>

//Objetivo desse treino
//Fazer uma estrutura simples de linked list apenas com uma encadeamento
//Criar funçoes para, procurar dados, inserir dados ao fim, ao início e na n-ésima posição e fazer uma função para printar todos os nós

struct Node {
    int data;
    Node* next;
};

void PrintNodes(Node* Head) {
    
    Node* temp = Head;

    while (temp != nullptr) {
        printf(" %d",temp->data);
        temp = temp->next;
    };
}

int main()
{
    //Criaremos uma lista encadeada criando um Head vazio e atribuindo um nó a ele em sequencia
    Node* Head = nullptr;

    Node* newNode = new Node(); //Alocando memória para o novo nó

    newNode->data = 10;
    newNode->next = nullptr;

    Head = newNode;

    //Utilizando as funções criadas
    PrintNodes(Head);

    delete newNode; //liberando memória

    return 0;
}