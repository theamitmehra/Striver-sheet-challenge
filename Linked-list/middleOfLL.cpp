#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

Node *findMiddle(Node *head) {
    auto a = head;
    auto b = head;

    while(a->next and b->next){
        a = a->next;
        if(a->next){
            a = a->next;

        }

        b = b->next;

    }

    return b;
}
