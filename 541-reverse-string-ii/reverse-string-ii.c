void reverse(char *s,int left,int right)
{
    while(left<right)
    {
        char temp;
        temp=s[right];
        s[right]=s[left];
        s[left]=temp;
        left++;
        right--;
    }
}
char* reverseStr(char* s, int k) {
    int n,i;
    n=strlen(s);
    for(i=0;i<n;i+=2*k)
    {
        int end=i+k-1;
        if(end>=n)
        {
            end=n-1;
        }
        reverse(s,i,end);
    }
    return s;
}
/*
n=16
abcdefghijklmnop   k=3
0123456789012345
i e   i e   i e

e=i+k-1  --> 






*/