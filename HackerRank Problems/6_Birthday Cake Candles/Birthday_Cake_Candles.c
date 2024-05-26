int birthdayCakeCandles(int candles_count, int* candles) {
    
    //First, get the heightest candle  
    int max=0;
    for(int i=0;i<candles_count;i++){   
        if(max<=candles[i]){
            max = candles[i];
        }
    } 
    //Second ,count the frequency of the heightest candle 
    int count=0;
    for(int i=0;i<candles_count;i++){
        if(max==candles[i]){
            count++;
        }
    }
    return count;
}
