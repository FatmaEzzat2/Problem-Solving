
int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    * result_count =2;
    int i=0;
    static int arrOfResult[2]={0};
    
    for(i;i<a_count;i++){
    
        if(a[i]>b[i]){		//Alice wins
        
            arrOfResult[0]++; 
        }else if(a[i]==b[i]){
        
            //do nothing
        }else{			//Bob wins
        
           arrOfResult[1]++;  
        }   
    }
    return arrOfResult;
}

