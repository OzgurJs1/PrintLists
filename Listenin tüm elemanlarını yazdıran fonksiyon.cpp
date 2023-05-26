#include <stdio.h>
#include <stdlib.h>
// Listenin tüm elemanlarýný yazdýran fonksiyon
struct Node {
    int data;
    struct Node* next;
};

struct LinkedList {
    struct Node* head;
};

void printList(struct LinkedList* list) {
    // Baþlangýçta, geçici bir düðümü ilk düðüme eþitleyin
    struct Node* current_node = list->head;

    // Listenin sonuna kadar döngü yapýn
    while (current_node != NULL) {
        // Geçerli düðümün verilerini yazdýrýn
        printf("Data: %d\n", current_node->data);

        // Geçici düðümü bir sonraki düðüme taþýyýn
        current_node = current_node->next;
    }
}

int main() {
    // Boþ bir liste oluþturma
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

    // Listenin tüm elemanlarýný yazdýrma
    printList(&list);

    return 0;
}

