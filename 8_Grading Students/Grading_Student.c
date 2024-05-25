int* gradingStudents(int grades_count, int* grades, int *result_count) {
int n=0;
int diff=0;
*result_count = grades_count;
int* result = (int*)malloc(grades_count*sizeof(int));

 for(int i=0;i<grades_count;i++){
    n= (ceil(grades[i]/5)*5+5);
    diff = n - grades[i];
    if((diff<3)&&(grades[i]>=37)) {
        result [i]= n;
    }else{
        result [i]= grades[i];
    }
 }
return result;
}