#include "Ejercicio03.h"

Node* Ejercicio03::detectarCiclo(Node* head) {
    // Utilizando el algoritmo de Floyd (Tortoise and Hare)
    Node* tortoise = head;
    Node* hare = head;

    // Paso 1: Encuentra el punto de encuentro del tortoise y el hare
    while (hare != nullptr && hare->next != nullptr) {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare) {
            break;  // Punto de encuentro
        }
    }

    // Paso 2: Si no hay ciclo, retorna nullptr
    if (hare == nullptr || hare->next == nullptr) {
        return nullptr;
    }

    // Paso 3: Mueve uno de los punteros al inicio y encuentra el punto de entrada del ciclo
    tortoise = head;
    while (tortoise != hare) {
        tortoise = tortoise->next;
        hare = hare->next;
    }

    return tortoise;  // Retorna el nodo donde el ciclo comienza
}
