SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode *newTempNode = new SinglyLinkedListNode(data);
    newTempNode->next = llist;
    return newTempNode;
}