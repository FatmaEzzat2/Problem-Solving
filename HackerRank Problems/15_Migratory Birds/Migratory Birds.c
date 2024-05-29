int migratoryBirds(int arr_count, int* arr) {
    int arr_result[5]={0};
    int index=0;
    int max=0;
    
    for (int i=1; i<=5; i++) {
        for(int j=0;j<arr_count;j++){
            
            if(arr[j]==i){
                arr_result[i-1]++;
            }
        }
    }
      for (int i=1; i<=5; i++) {
        if(max<arr_result[i-1]){
            max = arr_result[i-1];
            index=i;
        }
    }
    
    return index;
}
