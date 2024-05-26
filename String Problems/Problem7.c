#include<stdio.h>
#define SIZE    100
int main()
{
    char arr[SIZE];
    gets(arr);
    
    int diff= 'A'-'a';
    int i=0;
    while(arr[i] != '\0'){
        //Detect lower case characters
        if((arr[i]>='a')&&(arr[i]<='z')){
            arr[i]+=diff;
        }else if((arr[i]>='A')&&(arr[i]<='Z')){
            arr[i]-=diff;
        }
        i++;
    }
    puts(arr);
    return 0;
}