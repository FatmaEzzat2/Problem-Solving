int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int diag1 = 0;
    int diag2 = 0;
    int difference=0;
    for(int i =0;i<arr_rows;i++){
        for(int j=0;j<arr_columns;j++){
            if(i==j)    //Get Diagonal_1
            {
                diag1 +=arr[i][j];
                
            }if(i+j==arr_rows-1){
                
                diag2 +=arr[i][j];  //Get Diagonal_2
            }   
        }
    }
   if(diag1>diag2){
       difference = diag1 - diag2;
   }else{
       difference = diag2 - diag1;
   } 
   return difference;
}
