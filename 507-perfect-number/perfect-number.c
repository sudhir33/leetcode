bool checkPerfectNumber(int num) {
    if(num==1) return 0;
    int res=1,i,sq;
    sq=sqrt(num);
    for(i=2;i<=sq;i++)
    {
        if(num%i==0)
        {
            res=res+i;
            if(i!=num/i)
            {
                res=res+(num/i);
            }
        }
    }
    return res==num;

}