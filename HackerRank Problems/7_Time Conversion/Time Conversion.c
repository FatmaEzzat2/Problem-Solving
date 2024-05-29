char* timeConversion(char* s) {
    static char arr_result[8];
     int i=0;
     for(i=0;i<8;i++){
         arr_result[i]=s[i];
     }
     
     //Detect PM or AM
     char time=s[8];
     char digit1=arr_result[0]-'0';
     char digit2=arr_result[1]-'0';
     int num=0;

     //Convet digit int numbers
     num = digit1*10+digit2;
     if((time=='A')&&(num==12)){
         num=0;
     }else if((time=='A')&&(num<12)){
         //do nothing
     }else if((time=='P')&&(num==12)){
         //do nothing
     }else if((time=='P')&&(num<12)){
         num +=12;
     }
      arr_result[1]=num%10+'0';
      num/=10;
      arr_result[0]=num+'0';
    return arr_result;
}
