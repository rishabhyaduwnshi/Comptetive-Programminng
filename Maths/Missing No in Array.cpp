int getMissingNo(int a[], int n)
{
    // For xor of all the elements in array
    int x1 = a[0];
 
    // For xor of all the elements from 1 to n+1
    int x2 = 1;
 
    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];
 
    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;
 
    return (x1 ^ x2);
}
 
