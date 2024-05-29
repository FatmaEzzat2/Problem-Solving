void bonAppetit(int bill_count, int* bill, int k, int b) {
    int sum=0;
    int b_acutual=0;
    int diff=0;
    
    for(int i=0;i<bill_count;i++){
        if(i==k){
            continue;
        }
        sum+=bill[i];
        
    }
    b_acutual= sum/2;
    diff=b-b_acutual; 
    if(diff>0){
        printf("%i",diff);
    }else{
        printf("Bon Appetit");
    }

}
