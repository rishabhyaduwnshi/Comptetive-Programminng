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
        
        void preorderTraversal(Node *temp)
        {
            if(temp != nullptr)
            {
                cout<<temp->data<<" ";
                preorderTraversal(temp->left);
                preorderTraversal(temp->right);
            }
        }
        
        void iterativePreorder(Node *temp)
        {
            stack<Node*> st;
            while(temp != NULL || !st.empty())
            {
                if(temp != NULL)
                {
                    cout<<temp->data<<" ";
                    st.push(temp);
                    temp = temp->left;
                }
                else
                {
                    temp = st.top();
                    st.pop();
                    temp = temp->right;
                }
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
    b1.preorderTraversal(broot);
    
    cout<<endl;
    
    b1.iterativePreorder(broot);
    
}
