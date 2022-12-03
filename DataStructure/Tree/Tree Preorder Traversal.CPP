void preOrder(Node *root) {
    // Check
    if (root == NULL) 
        return;
    else {
        // Visit root node
        cout << root->data << " ";
        // Visit all the nodes in the left subtree
        preOrder(root->left);
        // Visit all the nodes in the right subtree
        preOrder(root->right);
    }
}