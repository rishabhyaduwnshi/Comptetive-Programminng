
//https://bit.ly/3FBBVZj

void inorderTraversal(Node *root,vector<int> &vc)
{
    if(root != NULL)
    {
        inorderTraversal(root->left,vc);
        vc.push_back(root->data);
        inorderTraversal(root->right,vc);
    }
}

int sum(Node* root, int k) 
{ 
  
    vector<int> vc;
    inorderTraversal(root,vc);
    
    int sum = 0;
    for(int i=0;i<k;i++)
    sum = sum+vc[i];
    return sum;
} 
