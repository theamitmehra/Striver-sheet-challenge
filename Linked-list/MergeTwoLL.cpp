#include<bits/stdc++.h>
template <typename T>

class Node {
    public:
    T data;
    Node* next;

    Node(T data) {
        next = NULL;
        this->data = data;
    }

    ~Node() {
        if (next != NULL) {
            delete next;
        }
    }
};

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if (first == nullptr) {
        return second;
    }
    if (second == nullptr) {
        return first;
    }

    Node<int>* mergedHead = nullptr;
    Node<int>* mergedTail = nullptr;

    if (first->data <= second->data) {
        mergedHead = first;
        first = first->next;
    } else {
        mergedHead = second;
        second = second->next;
    }

    mergedTail = mergedHead;

    while (first != nullptr && second != nullptr) {
        if (first->data <= second->data) {
            mergedTail->next = first;
            first = first->next;
        } else {
            mergedTail->next = second;
            second = second->next;
        }
        mergedTail = mergedTail->next;
    }

    if (first != nullptr) {
        mergedTail->next = first;
    } else {
      mergedTail->next = second;
    }

    return mergedHead;
}