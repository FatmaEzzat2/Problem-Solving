#include<stdio.h>
#define SIZE    100
int main()
{
   char arr1[SIZE];
   char arr2[SIZE];
   
   gets(arr1);
   gets(arr2);
   
   int i=0;
   int flag=0;
   while((arr1[i]!='\0')){
       
       if(arr1[i]>arr2[i]){
           flag=1;
           break;
       }else if(arr2[i]>arr1[i]){
           flag=-1;
           break;
       }
       i++;
   }
   
   if(flag==0){
        printf("Two Strings are equal");
   }else if(flag==1){
        printf("String 1 > String 2");
   }else{
        printf("String 1 < String 2");
   }
    return 0;
}