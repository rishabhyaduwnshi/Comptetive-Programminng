int sumOfLeafNodes(Node *root )
{
    if(root == NULL)
    return 0;
    
    if(root->left == NULL && root->right == NULL)
    return root->data;
    else
    return sumOfLeafNodes(root->left)+sumOfLeafNodes(root->right);

}
