#include<stdio.h>
int main()
{
   char arr1[6]="Hello";
   char arr2[6]={'\0'};
   
   int i=0;
   while(arr1[i] != '\0'){
       arr2[i]=arr1[i];
       i++;
   }
   printf("%s",arr2);
    return 0;
}