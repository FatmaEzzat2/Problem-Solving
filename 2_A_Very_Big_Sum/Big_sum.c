long aVeryBigSum(int ar_count, long* ar) {
    long sum =0;
    int i=0;
    
    for(i;i<ar_count;i++){
        sum += ar[i];
    }
    return sum;
}
