// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int n=10;
    int ar[10] = {1, 1, 3, 1, 2, 1, 3, 3, 3, 3};
     int diff_count=0;
    int count=0;
    int temp=0;
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            if(ar[i]>ar[j]){
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
         printf("%i\t",ar[i]);
    }
    printf("\n");
    
    int index=ar[0];
    
    for(int i=1;i<n;i++){

        if(index == ar[i]){
            count++;
            
        }else if(index!=ar[i]){
            count++;
            index=ar[i];
            diff_count+=count%2;
            count =0;
            
        }
        printf("%i%i\t",count,diff_count);
    }    
   printf("%i",diff_count);

    return 0;
}
