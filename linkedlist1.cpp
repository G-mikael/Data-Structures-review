#include <iostream>

//Objetivo desse treino
//Fazer uma estrutura simples de linked list apenas com uma encadeamento
//Criar funçoes para, procurar dados, inserir dados ao fim, ao início e na n-ésima posição em listas encadeadas e fazer uma função para printar todos os nós

struct Node {
    int data;
    Node* next;
};

int main()
{
    //Criaremos uma lista encadeada criando um Head vazio e atribuindo um nó a ele em sequencia
    Node* Head = NULL;

    Node* newNode = new Node(); //Alocando memória para o novo nó

    newNode->data = 10;
    newNode->next = NULL;

    Head = newNode;

    delete newNode; //liberando a memória

    return 0;
}