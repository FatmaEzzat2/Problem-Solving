void miniMaxSum(int arr_count, int* arr) {
    
    long long int minSum=0;
    long long int maxSum=0;
    
    //First, sort the array.
    int temp=0;
    for(int i=0;i<arr_count;i++){
        for(int j=i+1;j<arr_count;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
    }
    //Second, calculate summation
    for(int i=0;i<arr_count-1;i++){
        minSum+=arr[i];
    }
    for(int i=1;i<arr_count;i++)
    {
        maxSum+=arr[i];
    }
    printf("%lld %lld",minSum,maxSum);
}
