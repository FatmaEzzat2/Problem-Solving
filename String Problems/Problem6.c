#include<stdio.h>
#define SIZE    100
int main()
{
    char arr[SIZE];
    gets(arr);
    
    int diff= 'A'-'a';
    int i=0;
    while(arr[i] != '\0'){
        arr[i]-=diff;
        i++;
    }
    puts(arr);
    return 0;
}