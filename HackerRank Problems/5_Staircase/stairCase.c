void staircase(int n) {
    int count = n-1;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            
            if(count<=(i+j)){
                printf("#");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

}
