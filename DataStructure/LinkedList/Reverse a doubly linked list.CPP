DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
// points to null
    DoublyLinkedListNode *next = NULL;
    DoublyLinkedListNode *prev = NULL;
    while(head != NULL) {
        // put head data in current node
        DoublyLinkedListNode *currentNode = new DoublyLinkedListNode(head->data);
        // move to next node
        currentNode->next = next;
        currentNode->prev = prev;
        next = currentNode;
        prev = currentNode;
        head = head->next;                            
    }
    return next;
}