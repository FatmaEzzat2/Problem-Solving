int birthday(int s_count, int* s, int d, int m) {
int sum=0;
int ans=0;
for(int i=0;i<s_count;i++)
{
    sum=0;
    for(int j=i;j<s_count;j++)
    {
        sum+=s[j];
        
        if(j-i+1==m)
        if(sum==d)ans++;
        
        }
}
return ans;
}
