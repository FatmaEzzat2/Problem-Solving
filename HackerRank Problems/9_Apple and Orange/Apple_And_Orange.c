/*
 * Complete the 'countApplesAndOranges' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER s
 *  2. INTEGER t
 *  3. INTEGER a
 *  4. INTEGER b
 *  5. INTEGER_ARRAY apples
 *  6. INTEGER_ARRAY oranges
 */

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {
    int Num_of_apples=0;
    int Num_of_Oranges=0;
    int distance=0;
    
    /*For apples*/
    for(int i=0;i<apples_count;i++){
        distance = apples[i]+a;
        if((distance>=s)&&(distance<=t)){
            Num_of_apples++;
        }
    }
     /*For oranges*/
     for (int i=0; i<oranges_count; i++){
         distance=oranges[i]+b;
          if((distance>=s)&&(distance<=t)){
            Num_of_Oranges++;
            }
     }
     printf("%i\n",Num_of_apples);
     printf("%i",Num_of_Oranges);

}
