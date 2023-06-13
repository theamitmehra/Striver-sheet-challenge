#include <bits/stdc++.h>
using namespace std;
/****************************************************************/


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

/*****************************************************************/

void deleteNode(LinkedListNode<int> *node)
{

    if (!node)
    {
        return;
    }

    if (!node->next)
    {
        node = NULL;
        return;
    }

    node->data = node->next->data;
    LinkedListNode<int> *temp = node->next;
    node->next = temp->next;
    delete temp;
}