char* capitalizeTitle(char* title) {
    
    int i;
    for(i=0;title[i]!='\0';i++)
    {
        if(title[i]>=65 && title[i]<=90)
        {
            title[i]=title[i]+32;
        }
    }
    int c=0,j=0;
    for(i=0;title[i]!='\0';i++)
    {
        if(title[i]==' ' && c>2)
        {
            title[j]-=32;
            
            //printf("%c %d\n ",title[j],j);
        }
        if(title[i]==' ')
        {
            j=i+1;
            c=0;
        }
        else
        {
            c++;
        }
    }
    if(c>2)
    title[j]-=32;
            
    
    return title;
}