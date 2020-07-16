/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    if(head == NULL)
        return false;

    Node *slow, *fast;

    slow = fast = head;

    while(true) {

        slow = slow->next;

        if(fast->next != NULL)
            fast = fast->next->next;
        else
            return false; 

        if(slow == NULL || fast == NULL)
            return false;

        if(slow == fast) 
            return true;
    }
}