#include <bits/stdc++.h>
using namespace std;
/****************************************************************/

// Following is the class structure of the LinkedListNode class:

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

bool isPalindrome(LinkedListNode<int> *head)
{
    // Write your code here.
    if (head == NULL || head->next == NULL)
    {

        return true;
    }

    vector<int> v;

    LinkedListNode<int> *temp = head;

    while (temp != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    int size = v.size();

    for (int i = 0; i < (size / 2); i++)
    {
        if (v[i] != v[size - 1 - i])
        {
            return false;
        }
    }

    return true;
}