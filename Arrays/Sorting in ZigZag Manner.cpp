void zigZag(int arr[], int n) 
	{
	    for(int i=1;i<n;i+=2)
	    {
	        if(arr[i-1] > arr[i])
	        swap(arr[i],arr[i-1]);
	        
	        if((i+1<n) && arr[i+1] > arr[i])
	        swap(arr[i],arr[i+1]);
	    }
	}
