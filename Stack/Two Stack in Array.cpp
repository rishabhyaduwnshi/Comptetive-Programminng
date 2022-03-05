#include<bits/stdc++.h>
using namespace std;

class twoStack
{
    public:
        int *array;
        int capacity;
        int top1;
        int top2;
    
    twoStack(int n)
    {
        array = new int[n];
        capacity = n;
        top1 = -1;
        top2 = capacity;
    }
    
    void push1(int x)
    {
        if(top1<top2-1)
        {
            top1++;
            array[top1] = x;
        }
    }
    
    void push2(int x)
    {
        if(top1<top2-1)
        {
            top2--;
            array[top2] = x;
        }
        
    }
    
    int pop1()
    {
        if(top1>-1)
        {
            int x = array[top1];
            top1--;
            return x;
        }
    }
    
    int pop2()
    {
        if(top2<capacity)
        {
            int x = array[top2];
            top2++;
            return x;
        }
    }
    
    void printArray()
    {
        for(int i=0;i<capacity;i++)
        cout<<array[i]<<" ";
    }
};

int main()
{
    twoStack tS1(5);
    tS1.push1(1);
    tS1.push1(2);
    tS1.push1(3);
    tS1.push2(4);
    tS1.push2(5);
    //these two will not get pushed as stack is full
    tS1.push2(10);
    tS1.push1(20);
    
    tS1.printArray();
}
