
//using two stacks

#include<iostream>
#include<stack>
using namespace std;

class Node
{
    public:
        int data;
        Node *left;
        Node *right;
};

class binarySearchTree
{
    private:
        Node *root;
    public:
        binarySearchTree()
        {
            root = nullptr;
        }
        
        Node* getRootNode()
        {
            return root;
        }
        
        void insertNode(int key)
        {
            Node *p,*q,*temp;
            q = root;
            if(root == nullptr)
            {
                root = new Node;
                root->data = key;
                root->left = nullptr;
                root->right = nullptr;
                return;
            }
            
            while(q != nullptr)
            {
                    p = q;
                    if(key < q->data)
                    q = q->left;
                    
                    else if(key > q->data)
                    q = q->right;
                    
                    else return;
            }
            
            temp = new Node;
            temp->data = key;
            temp->left = nullptr;
            temp->right = nullptr;
            
            if(temp->data < p->data)
            p->left = temp;
            else
            p->right = temp;
            return;
        }
        
        void postOrderTraversal(Node *temp)
        {
            if(temp != nullptr)
            {
                postOrderTraversal(temp->left);
                postOrderTraversal(temp->right);
                cout<<temp->data<<" ";
            }
        }
        
        void iterativePostorder(Node *root)
        {
            stack<Node*> st1,st2;
            st1.push(root);
            Node *temp;
            
            while(!st1.empty())
            {
                temp = st1.top();
                st1.pop();
                st2.push(temp);
                
                
                if(temp->left != nullptr)
                st1.push(temp->left);
                
                if(temp->right != nullptr)
                st1.push(temp->right);
            }
            
            while(!st2.empty())
        {
            temp = st2.top();
            st2.pop();
            cout<<temp->data<<" ";
        }
        }
        
};

int main()
{
    binarySearchTree b1;
    b1.insertNode(5);
    b1.insertNode(4);
    b1.insertNode(12);
    b1.insertNode(10);
    b1.insertNode(25);
    b1.insertNode(1);
    b1.insertNode(2);
    b1.insertNode(3);
    
    
    Node* broot = b1.getRootNode();
    b1.postOrderTraversal(broot);
    
    cout<<endl;
    
    b1.iterativePostorder(broot);
    
}
