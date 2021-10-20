#include <iostream>

struct Node {
    int data;
    struct Node *next;
};

struct Node* head = NULL;

void insert(int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void display() {
    struct Node* ptr;
    ptr = head;
    while (ptr != NULL) {
        std::cout << ptr -> data << " ";
        ptr = ptr -> next;
    }
}

int main() {
    while(true) {
        int n;
        std::cin >> n;
        if(n == 0) {
            insert(n);
            break;
        } else {
            insert(n);
        }
    }
    std::cout << "The linked list is: ";
    display();
    return 0;
}