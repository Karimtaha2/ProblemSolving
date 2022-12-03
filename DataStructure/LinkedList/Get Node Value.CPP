int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode *temp = head;
    int moveIndex = 0;
    while (head != NULL) {
        head = head->next;
        if (moveIndex > positionFromTail) 
            temp = temp->next;  
        moveIndex++;   
      }
    return temp->data;
}