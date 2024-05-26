#include<stdio.h>
#define SIZE    100
int main()
{
   gets(arr1);
   gets(arr2);
   
   //Get the length of array1
   int i=0;
   int count=0;
   
   while(arr1[i] != '\0'){
     i++;
   }
   count = i;     //To escape a Null character
   
   //Copy the content of arr2 in arr1
   i=0;
   while(arr2[i] != '\0'){
       arr1[count+i]=arr2[i];
       i++;
   }
   printf("%s",arr1);
    return 0;
}