#include<stdio.h>
int main()
{
   char*ptr="Hello ";
   int count =0;
   while(*ptr != '\0'){
       count++;
       ptr++;
   }
   printf("counter=%i",count);
    return 0;
}