char* kangaroo(int x1, int v1, int x2, int v2) {
    char *s= (char*)malloc(4*sizeof(char));
    int s1=0;
    int s2=0;

    for(int i=1;i<10000;i++){
        s1= x1+v1*i;
        s2= x2+v2*i;
        if(s1==s2){
            s="YES";
            break;
        }else {
            s="NO";
        }     
    }
    return s;
}