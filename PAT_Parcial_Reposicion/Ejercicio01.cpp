#include "Ejercicio01.h"

Node* Ejercicio01::sumarListas(Node* l1, int tamanoL1, Node* l2, int tamanoL2) {
    Node* resultado = new Node(0);
    Node* actual = resultado;
    int acarreo = 0;

    while (l1 != nullptr || l2 != nullptr) {
        int valor1 = (l1 != nullptr) ? l1->val : 0;
        int valor2 = (l2 != nullptr) ? l2->val : 0;
        int suma = valor1 + valor2 + acarreo;

        acarreo = suma / 10;
        actual->next = new Node(suma % 10);
        actual = actual->next;

        if (l1 != nullptr) l1 = l1->next;
        if (l2 != nullptr) l2 = l2->next;
    }

    if (acarreo > 0) {
        actual->next = new Node(acarreo);
    }

    return resultado->next;
}
