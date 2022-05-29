#include <bits/stdc++.h>

void thirdLargest(int arr[], int arr_size)
{
    
    if (arr_size < 3)
    {
        printf(" Invalid Input ");
        return;
    }

    int first = arr[0], second = INT_MIN, third = INT_MIN;
    for (int i = 1; i < arr_size ; i ++)
    {
    
        if (arr[i] > first)
        {
            third  = second;
            second = first;
            first  = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third)
            third = arr[i];
    }

    printf("The third Largest element is %d\n", third);
}

int main()
{
    int arr[] = {12, 13, 1, 10, 34, 16};
    int n = sizeof(arr)/sizeof(arr[0]);
    thirdLargest(arr, n);
    return 0;
}
