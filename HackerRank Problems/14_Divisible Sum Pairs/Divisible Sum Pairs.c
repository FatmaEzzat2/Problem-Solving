int divisibleSumPairs(int n, int k, int ar_count, int* ar) {
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        for (int j=i+1; j<n; j++) {
            if(i<j){
                sum= ar[i]+ar[j];
                if(sum%k==0){
                    count++;
                }
            }    
        }
        sum=0;
        
    }
    return count;

}
