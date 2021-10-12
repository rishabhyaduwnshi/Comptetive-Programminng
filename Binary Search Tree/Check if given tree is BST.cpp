
//https://bit.ly/3aqQHE2



// Finding the inorder traversal and storing it in a vetor
// If the vector is sorted, then it is a BST



void inorderTraversal(Node *root,vector<int> &vc)
    {
        if(root != NULL)
        {
        inorderTraversal(root->left,vc);
        vc.push_back(root->data);
        inorderTraversal(root->right,vc);
        }
    }
    
    bool isBST(Node* root) 
    {
        vector<int> vc;
        inorderTraversal(root,vc);
        for(int i=0;i<vc.size()-1;i++)
        if(vc[i] >= vc[i+1] )
        return false;
        
        return true;
    }
