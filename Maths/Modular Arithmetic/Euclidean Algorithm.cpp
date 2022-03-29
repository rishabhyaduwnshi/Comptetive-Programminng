int findHCF(int a,int b)
{
    if(b == 0)
        return a;
    else
        return findHCF(b,a%b);
}

// Important Points
// The value of b reduces in every next function call
// If b is higher in first call, a & b are swapped in next function call
// b is always smaller than a, except possibly the first call 
