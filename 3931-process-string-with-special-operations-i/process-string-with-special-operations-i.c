int append(char *res,int j)
{
    int size=j;
    int i;
    
    for(int i=0;i<j;i++)
    {
        res[size]=res[i];
        size++;
    }
    return size;
}
void reverse(char *res,int n)
{
    int i,j;
    i=0;j=n-1;
    while(i<j)
    {
        char temp=res[i];
        res[i]=res[j];
        res[j]=temp;
        i++;
        j--;
    }
}
char* processStr(char* s) {
    static char res[1000005];
    int i=0,j=0;
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c ",s[i]);
        if(s[i]=='*' && j>0)
        {
            j--;
        }
        else if(s[i]=='#' && j>0)
        {
            j=append(res,j);
        }
        else if(s[i]=='%' && j>0)
        {
            reverse(res,j);
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            res[j++]=s[i];
        }
        //printf("\n%s",res);
    }
    res[j]='\0';
    return res;
}