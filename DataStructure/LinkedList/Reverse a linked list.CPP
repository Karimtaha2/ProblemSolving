SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    // points to null
    SinglyLinkedListNode *next = NULL;
    while(head != NULL) {
        // put head data in current node
        SinglyLinkedListNode *currentNode = new SinglyLinkedListNode(head->data);
        // move to next node
        currentNode->next = next;
        next = currentNode;
        head = head->next;                            
    }
    return next;
}