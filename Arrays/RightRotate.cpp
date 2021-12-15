void rightRotate(int array[], int size, int rotateBy)
{
    int temp[rotateBy];
    int i;
    
    for(i=0;i<rotateBy;i++)
    temp[i] = array[size-rotateBy+i];
    
    for(i=size-rotateBy-1;i>=0;i--)
    array[i+rotateBy] = array[i];
    
    
    for(i=0;i<rotateBy;i++)
    array[i] = temp[i];
}





int main()
{
    int array[] = {5,4,3,2,1};
    int n = sizeof(array)/sizeof(int);
    rightRotate(array,n,2);
    
    for(int i=0;i<n;i++)
    cout<<array[i]<<" ";
}
