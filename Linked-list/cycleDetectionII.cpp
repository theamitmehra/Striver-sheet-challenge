Node *firstNode(Node *head) {
    if (head == nullptr || head->next == nullptr)
        return nullptr;

    Node *slow = head;
    Node *fast = head;
    bool hasCycle = false;

    // Step 1: Find the meeting point of the slow and fast pointers
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            hasCycle = true;
            break;
        }
    }

    // Step 2: If no cycle exists, return nullptr
    if (!hasCycle)
        return nullptr;

    // Step 3: Move the slow pointer back to the head and keep the fast pointer at the meeting point
    slow = head;

    // Step 4: Move both pointers at the same pace until they meet again at the start of the cycle
    while (slow != fast) {
      slow = slow->next;
      fast = fast->next;
    }

    // Step 5: Return the first node of the cycle
}