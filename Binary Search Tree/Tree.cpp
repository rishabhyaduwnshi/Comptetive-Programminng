#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *leftchild;
    Node *rightchild;
};

class binarySearchTree
{
    private:
        Node *rootNode;
    public:
        queue<Node*> q;
        binarySearchTree()
        {
            rootNode = nullptr;
        }
        
        Node* getRootAddress()
        {
            return rootNode;
        }
        
    void createTree()
        {
            int key;
            Node *temp,*newNode;
            if(rootNode == nullptr)
            {
                cout<<"Enter rootNode data : ";
                cin>>key;
                rootNode = new Node;
                rootNode->data = key;
                rootNode->leftchild = nullptr;
                rootNode->rightchild = nullptr;
                q.push(rootNode);
            }
            
            while(!q.empty())
            {
                temp = q.front();
                q.pop();
                
                cout<<"Enter the left child of : "<<temp->data<<" ";
                cin>>key;
                
                if(key != -1)
                {
                    newNode = new Node;
                    newNode->data = key;
                    newNode->leftchild = nullptr;
                    newNode->rightchild = nullptr;
                    temp->leftchild = newNode;
                    q.push(newNode);
                }
                
                cout<<"Enter the right child of : "<<temp->data<<" ";
                cin>>key;
                
                if(key != -1)
                {
                    newNode = new Node;
                    newNode->data = key;
                    newNode->leftchild = nullptr;
                    newNode->rightchild = nullptr;
                    temp->rightchild = newNode;
                    q.push(newNode);
                }
                
            }
            
        }
        
        void inorderTraversal(Node* rootNode)
        {
            if(rootNode != nullptr)
            {
                inorderTraversal(rootNode->leftchild);
                cout<<rootNode->data<<" ";
                inorderTraversal(rootNode->rightchild);
            }
        }
        
        void iterativeInorder(Node* rootNode)
        {
            stack<Node*> st;
            while(rootNode != nullptr || !st.empty())
            {
                if(rootNode != nullptr)
                {
                    st.push(rootNode);
                    rootNode = rootNode->leftchild;
                }
                else
                {
                    rootNode = st.top();
                    st.pop();
                    cout<<rootNode->data<<" ";
                    rootNode = rootNode->rightchild;
                }
            }
        }
};




int main()
{
    binarySearchTree b1;
    b1.createTree();
    Node *b1root = b1.getRootAddress();
    b1.iterativeInorder(b1root);
    cout<<"\n";
    b1.inorderTraversal(b1root);
}
