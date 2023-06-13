Node* rotate(Node* head, int k) {
    if (head == nullptr || head->next == nullptr || k == 0)
        return head;

    int length = 1;
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
        length++;
    }

    k %= length;
    if (k == 0)
        return head;

    int stepsToNewHead = length - k - 1;
    Node* newTail = head;
    while (stepsToNewHead > 0) {
        newTail = newTail->next;
        stepsToNewHead--;
    }

    Node* newHead = newTail->next;
    newTail->next = nullptr;
    tail->next = head;

    return newHead;
}
