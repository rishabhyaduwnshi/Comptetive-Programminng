void inOrder(Node* temp,vector<int> &vc)
{
    if(temp != NULL)
    {
        inOrder(temp->left,vc);
        vc.push_back(temp->data);
        inOrder(temp->right,vc);
    }
}

Node* make_balanced(int start,int end,vector<int>v)
{
    if(start > end)
    return NULL;
    
    int mid = (start+end)/2;
    Node* root = new Node(v[mid]);
    
    root->left = make_balanced(start,mid-1,v);
    root->right = make_balanced(mid+1,end,v);
    return root;
   
}




Node* buildBalancedTree(Node* root)
{
    vector<int> vc;
    inOrder(root,vc);
    int x = vc.size();
    return make_balanced(0,x-1,vc);
}
