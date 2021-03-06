# include <bits/stdc++.h>
using namespace std;

int count(int arr[], int x, int n)
{ 
/* get the index of first occurrence of x */
int *low = lower_bound(arr, arr+n, x);

// If element is not present, return 0
if (low == (arr + n) || *low != x)
	return 0;
	
int *high = upper_bound(low, arr+n, x);	 
	
/* return count */
return high - low;
}


int main()
{
int arr[] = {1, 2, 2, 3, 3, 3, 3};
int x = 3; // Element to be counted in arr[]
int n = sizeof(arr)/sizeof(arr[0]);
int c = count(arr, x, n);
printf(" %d occurs %d times ", x, c);
return 0;
}
