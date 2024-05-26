#include<stdio.h>
#include<string.h>

#define SIZE    100
int main()
{
    char arr[SIZE];
    gets(arr);

    int len= strlen(arr);
    
    char*ptr1=arr;  //Point at the first element 
    char*ptr2=arr+len-1;  //Point at the last element
    
    int temp=0;
    int i=0;

    while(i<len/2){
        //swap
        temp = *ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
        
        //move pointers
        ptr1++;
        ptr2--;
        
        i++;
    }
   puts(arr);
    return 0;
}