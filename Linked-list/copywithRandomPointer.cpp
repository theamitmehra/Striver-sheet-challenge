#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

*************************************************************/

template <typename T>   
class LinkedListNode
{
    public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode<T> *random;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    if (head == nullptr)
        return nullptr;

    // Step 1: Create a mapping between original nodes and cloned nodes
    std::unordered_map<LinkedListNode<int>*, LinkedListNode<int>*> nodeMap;

    LinkedListNode<int>* current = head;
    LinkedListNode<int>* newHead = new LinkedListNode<int>(current->data);
    LinkedListNode<int>* clonedCurrent = newHead;
    nodeMap[current] = clonedCurrent;

    // Step 2: Clone the next pointers
    while (current->next != nullptr) {
        clonedCurrent->next = new LinkedListNode<int>(current->next->data);
        current = current->next;
        clonedCurrent = clonedCurrent->next;
        nodeMap[current] = clonedCurrent;
    }

    // Step 3: Clone the random pointers using the mapping
    current = head;
    clonedCurrent = newHead;
    while (current != nullptr) {
        clonedCurrent->random = nodeMap[current->random];
        current = current->next;
        clonedCurrent = clonedCurrent->next;
    }

    return newHead;
}
