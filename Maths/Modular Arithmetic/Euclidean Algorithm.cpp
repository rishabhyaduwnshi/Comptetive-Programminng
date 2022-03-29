int findHCF(int a,int b)
{
    if(b == 0)
        return a;
    else
        return findHCF(b,a%b);
}
