Node* newNode(int key)
{
    Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = key;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node* constructBST(int postorder[],int start,int end)
{
    if(start > end)
    return NULL;
    
    Node *root = newNode(postorder[end]);
    
    int i;
    for(i=end;i>=start;i--)
    {
        if(postorder[i] < root->data)
        break;
    }
    
    root->right = constructBST(postorder,i+1,end-1);
    root->left = constructBST(postorder,start,i);
}


Node *constructTree (int post[], int size)
{
    
    Node *root = constructBST(post,0,size-1);
    return root;
    
}

int main()
{
  int postOrder = {8, 12, 10, 16, 25, 20, 15};
  int size = sizeof(postOrder)/sizzeof(int);
  constructTree(postorder,size);
}
