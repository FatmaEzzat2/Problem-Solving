#include<stdio.h>
#define SIZE    100
#define NUM_OF_VOWELS   5
int main()
{
    char arr[SIZE];
    char arrOfVowels[NUM_OF_VOWELS+1]={'a','e','u','i','o'};
    gets(arr);
    
    int countVowels=0;
    int countConsonants=0;
    int flag=0;
    int i=0;
    while(arr[i] != '\0'){
      if(((arr[i]>='a')&&(arr[i]<='z'))||((arr[i]>='A')&&(arr[i]<='Z'))){
          
          for(int j=0;j<NUM_OF_VOWELS;j++){
            if(arr[i]==arrOfVowels[j]){
                flag=1;
                break;
            }
          }
        if(flag ==1){
            countVowels++;
            flag=0;
        }else{
            countConsonants++;
        }
      }
      
    i++;
    }
    printf("Number of vowels = %i\n",countVowels);
    printf("Number of consonants = %i\n",countConsonants);
   
    return 0;
}