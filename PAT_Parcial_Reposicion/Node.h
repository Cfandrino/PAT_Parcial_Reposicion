#ifndef NODE_H
#define NODE_H

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

#endif
