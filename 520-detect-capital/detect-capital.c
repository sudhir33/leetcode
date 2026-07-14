bool detectCapitalUse(char* word) {
    int i,len;
    for(i=0;word[i]!='\0';i++);
    len=i;
    int cc=0,sc=0;
    for(i=0;word[i]!='\0';i++)
    {
        if(word[i]>=65 &&word[i]<=90)
        {
            cc++;
        }
        else if(word[i]>=97 && word[i]<=122)
        {
            sc++;
        }
    }
    int fc=0;
    if(word[0]>=65 && word[0]<=90)
    {
        fc=1;
    }
    //printf("%d ",fc);
    if(len==cc || len==sc || (fc==1 && len-1==sc))
    {
        return 1;
    }
    return 0;

}