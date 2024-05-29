int pageCount(int n, int p) {
    int front = p/2;
    int back=0;
    
    if(n%2==1){
        back =(n-p)/2;
    }else{
        back =(n-p+1)/2;
    }
    return ((front>back)?(back):(front));
   
}
