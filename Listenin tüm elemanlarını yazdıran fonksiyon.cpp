#include <stdio.h>
#include <stdlib.h>
// Listenin t�m elemanlar�n� yazd�ran fonksiyon
struct Node {
    int data;
    struct Node* next;
};

struct LinkedList {
    struct Node* head;
};

void printList(struct LinkedList* list) {
    // Ba�lang��ta, ge�ici bir d���m� ilk d���me e�itleyin
    struct Node* current_node = list->head;

    // Listenin sonuna kadar d�ng� yap�n
    while (current_node != NULL) {
        // Ge�erli d���m�n verilerini yazd�r�n
        printf("Data: %d\n", current_node->data);

        // Ge�ici d���m� bir sonraki d���me ta��y�n
        current_node = current_node->next;
    }
}

int main() {
    // Bo� bir liste olu�turma
    struct LinkedList list;
    list.head = NULL;

    // Eleman ekleme
    struct Node* new_node1 = (struct Node*) malloc(sizeof(struct Node));
    new_node1->data = 10;
    new_node1->next = NULL;
    list.head = new_node1;

    struct Node* new_node2 = (struct Node*) malloc(sizeof(struct Node));
    new_node2->data = 20;
    new_node2->next = NULL;
    new_node1->next = new_node2;

    struct Node* new_node3 = (struct Node*) malloc(sizeof(struct Node));
    new_node3->data = 30;
    new_node3->next = NULL;
    new_node2->next = new_node3;

    // Listenin t�m elemanlar�n� yazd�rma
    printList(&list);

    return 0;
}

