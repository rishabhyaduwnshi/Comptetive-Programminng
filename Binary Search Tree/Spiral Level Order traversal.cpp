vector<int> findSpiral(Node *root)
{
    vector<int> vc;
    if(root == nullptr)
    return vc;
    
    stack<Node*> st1;
    stack<Node*> st2;
    
    st1.push(root);
    
    while(!st1.empty() || !st2.empty())
    {
        while(!st1.empty())
        {
            Node *temp = st1.top();
            st1.pop();
            vc.push_back(temp->data);
            
            if(temp->right != nullptr)
            st2.push(temp->right);
            if(temp->left != nullptr)
            st2.push(temp->left);
        }
        
        while(!st2.empty())
        {
            Node *temp = st2.top();
            st2.pop();
            vc.push_back(temp->data);
            
            if(temp->left != nullptr)
            st1.push(temp->left);
            if(temp->right != nullptr)
            st1.push(temp->right);
        }
    }
   
   return vc;
}
