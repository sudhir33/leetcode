char repeatedCharacter(char* s) {
    int a[26]={0};
    int i,ind;
    for(i=0;s[i]!='\0';i++){
        ind=s[i]-97;
        a[ind]++;
        if(a[ind]==2)
        {
            break;
        }
    }
    return s[i];
}