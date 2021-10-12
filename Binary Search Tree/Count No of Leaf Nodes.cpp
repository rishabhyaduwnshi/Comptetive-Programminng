int noOfLeafNodes(Node *root )
{
    if(root == NULL)
    return 0;
    
    if(root->left == NULL && root->right == NULL)
    return 1;
    else
    return noOfLeafNodes(root->left)+noOfLeafNodes(root->right);

}
