#include "Ejercicio02.h"

Node* reverseKNodes(Node* head, int k) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    int count = 0;
    Node* temp = head;

    // Count the number of nodes in the list
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }

    // If the number of remaining nodes is less than k, do not reverse
    if (count < k) {
        return head;
    }

    // Reverse k nodes
    for (int i = 0; i < k; i++) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    // Recursively reverse the rest of the nodes
    if (next != nullptr) {
        head->next = reverseKNodes(next, k);
    }

    return prev;
}

Node* Ejercicio02::reverseKGroup(Node* head, int k) {
    return reverseKNodes(head, k);
}
