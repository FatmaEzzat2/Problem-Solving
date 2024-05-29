int* breakingRecords(int scores_count, int* scores, int* result_count) {

    *result_count =2;
    
    static int result_arr[2]={0};
    int *arr_High= (int*)malloc(sizeof(int)*scores_count);
    int *arr_Low = (int*)malloc(sizeof(int)*scores_count);
        
    arr_High[0]=scores[0];
    arr_Low[0] =scores[0];   
     
    for(int i=1;i<scores_count;i++){
        
        if(scores[i]>arr_High[i-1]){
            arr_High[i]=scores[i];
            arr_Low[i]=arr_Low[i-1];
            result_arr[0]++;
            
        }else if(scores[i]<arr_Low[i-1]){
            arr_High[i]=arr_High[i-1];
            arr_Low[i]=scores[i];
            result_arr[1]++;
        }else{
            arr_High[i]=arr_High[i-1];
            arr_Low[i]=arr_Low[i-1];
        }
    }
    
    return result_arr;
}