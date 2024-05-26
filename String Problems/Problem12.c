#include<stdio.h>
#include<string.h>

#define SIZE    100
#define SPACE_ASCII     32
int main()
{
    char arr[SIZE];
    gets(arr);

    int len= strlen(arr);
    char *ptr1= arr;
    char *ptr2= arr+len-1;
    int i=0;
    int flag=1;

    while(i<len){
        
      if(*ptr1!=*ptr2){
          flag=0;
          break;
      }
      ptr1++;
      ptr2--;
      i++;
    }
    if(flag==1){
        printf("The string is palindrome");
    }else{
        printf("The string is not palindrome");
    }
    return 0;
}