void printSubarrays(int array[], int size)
{
  
  for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            for(int k=i; k<=j; k++)
            {
                cout<<array[k]<<" ";
            }
        }
    }
}
