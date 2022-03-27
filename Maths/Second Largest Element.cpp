int middle(int A, int B, int C)
    {
        int maximum = max(max(A,B),C);
        int minimum = min(min(A,B),C);
        
        return maximum^minimum^A^B^C;
    }
