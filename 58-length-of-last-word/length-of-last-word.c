int lengthOfLastWord(char* s) {
    int res=0,i,st=0;
    int len=0;
    for(i=0;s[i]!='\0';i++);
    len=i;
    for(i=len-1;i>=0;i--)
    {
        if(s[i]==' ' && st==1)
        {
            break;
        }
        else if(s[i]!=' ')
        {
            st=1;
            res++;
        }
    }
    return res;
}