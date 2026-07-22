bool checkPerfectNumber(int num) {
    if(num==1)return 0;
    int sq,sum=1;
    sq=sqrt(num);
    int i;
    for(i=2;i<=sq;i++)
    {
        if(num%i==0)
        {
            //printf("%d ",i);
            sum=sum+i;
            sum=sum+num/i;
        }
    }
    if(sum==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
/*
num=28

i=2   sum=1+2+14

2*14

*/