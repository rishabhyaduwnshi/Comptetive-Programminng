
// AND operation of n and -n gives 1 only at the position of first set bit and rest bits becomes zero.
// Then find log2 of the result and add 1 to get the answer. 


//ffs is an inbuilt function which returns the position of first set Bit
void printBinary(int n)
{
    cout<<ffs(n)<<endl;
}




unsigned int getFirstSetBit(int n)
    {
        if(n == 0)
        return 0;
        int x = n&-n;
        x = log2(x);
        x = x+1;
        return x;
        
    }
