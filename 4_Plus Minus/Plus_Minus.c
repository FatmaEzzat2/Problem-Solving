void plusMinus(int arr_count, int* arr) {
    int postive_count =0;
    int negative_count =0;
    int zero_count =0;
    int i=0;
    for(i;i<arr_count;i++){
        
        if(arr[i]>0)    	//count Positive
        {
           postive_count++; 
        }
        else if(arr[i]<0){	//count Negative
            negative_count++;
        }
        else{			//count zero
            zero_count++;
        }
    }
    printf("%f\n",(float)postive_count/arr_count);
    printf("%f\n",(float)negative_count/arr_count);
    printf("%f\n",(float)zero_count/arr_count);
 
}


