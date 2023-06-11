#include <bits/stdc++.h>
using namespace std;

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};


LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *previous = nullptr;
    LinkedListNode<int> *current = head;

    while (current != nullptr) {
        LinkedListNode<int> *nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }

    return previous;
    
}