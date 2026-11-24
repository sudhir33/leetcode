int maxPower(char* s) {
    int c=1,mc=1;
    int i;
    for(i=1;s[i]!='\0';i++)
    {
        if(s[i]==s[i-1])
        {
            c++;
        }
        else
        {
            if(c>mc)
            {
                mc=c;
            }
            c=1;
        }

    }
    if(c>mc)
    {
        mc=c;
    }
return mc;
}