void levelorderTraversal(Node *root)
        {
            queue<Node*> q;
            q.push(root);
            
            Node *temp;
            
            while(!q.empty())
            {
                temp = q.front();
                q.pop();
                
                cout<<temp->data<<" ";
                
                if(temp->left != nullptr)
                q.push(temp->left);
                
                if(temp->right != nullptr)
                q.push(temp->right);
                
            }
        }
