Node* newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node* constructBST(preOrder[],start,end)
{
    if(start > end)
    return NULL;
    
    Node *root = newNode(preOrder[start]);
    
    int i;
    for(i=start;i<=end;i++)
    {
        if(preOrder[i] > root->data)
        break;
    }
    
    root->left = constructBST(preOrder,start+1,i-1);
    root->right = constructBST(preOrder,i,end);
}
