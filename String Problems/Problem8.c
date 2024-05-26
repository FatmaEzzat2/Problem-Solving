#include<stdio.h>
#define SIZE    100
int main()
{
    char arr[SIZE];
    gets(arr);
    
    int countAlph=0;
    int countDigit=0;
    int countspecial=0;
    
    int i=0;
    while(arr[i] != '\0'){
        //Detect alphabets
        if(((arr[i]>='a')&&(arr[i]<='z'))||((arr[i]>='A')&&(arr[i]<='Z'))){
            countAlph++;
            
        //Detect digits
        }else if((arr[i]>='0')&&(arr[i]<='9')){
            countDigit++;
            
        //Detect special characters
        }else{
            countspecial++;
        }
        i++;
    }
    printf("Number of alphabets = %i\n",countAlph);
    printf("Number of digits = %i\n",countDigit);
    printf("Number of special characters = %i",countspecial);
    return 0;
}