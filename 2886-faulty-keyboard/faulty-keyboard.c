char* finalString(char* s) {
    char *res;
    res=(char *)malloc(100*sizeof(char));//char res[100];
    int i=0,n,j=0;
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='i')
        {
            
            int left=0,right=j-1;
            while(left<right)
            {
                char temp;
                temp=res[left];
                res[left]=res[right];
                res[right]=temp;
                left++;
                right--;
            }
        }
        else
        {
            res[j]=s[i];
            j++;
        }
    }
    res[j]='\0';
    return res;
    
}
/*
poiinter    n=8
01234567 

ponter
*/