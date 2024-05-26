#include<stdio.h>
#include<string.h>

#define SIZE    100
#define SPACE_ASCII     32
int main()
{
    char arr[SIZE];
    gets(arr);

    int len= strlen(arr);
    int countWords=0;
    int i=0;

    while(i<len){
      if(arr[i]==SPACE_ASCII){
          countWords++;
      }
      i++;
    }
    countWords++;   //For the last word
   printf("Number of words is %i",countWords);
    return 0;
}