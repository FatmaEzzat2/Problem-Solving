
int sockMerchant(int n, int ar_count, int* ar) {
    int arr_freq[101]={0};
    int count=0;
    
    for(int i=0;i<ar_count;i++){
        arr_freq[ar[i]]++;
    }
    
    for(int i=0;i<=100;i++){
             count+=arr_freq[i]/2; 
    }
    
    return count;
}

