bool checkRecord(char* s) {
    int ac=0,Lcc=0;
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='A')
        {
            ac++;
        }
        if(s[i]=='L')
        {
            Lcc++;
        }
        else
        {
            Lcc=0;
        }
        if(ac==2 || Lcc==3)
        {
            return 0;
        }
    }
    return 1;
}