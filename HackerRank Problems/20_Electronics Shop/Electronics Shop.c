int getMoneySpent(int keyboards_count, int* keyboards, int drives_count, int* drives, int b) {
    /*
     * Write your code here.
     */
     int max=0;
     int max_diff=-1;
     
    for (int i=0; i<keyboards_count; i++) {
        for(int j=0;j<drives_count;j++){
            max= (keyboards[i]+drives[j]);
            
            if((max_diff<max)&&(max<=b)){
                max_diff=max;
            }
        }
    }
    return max_diff;
}