bool isHappy(int n) {
    int res,d;
    if(n==1 || n==7)
    {
        return 1;
    }
    if(n<10)
    {
        return 0;
    }
    res=0;
    while(n)
    {
        d=n%10;
        n=n/10;
        res=res+(d*d);
    }
    return isHappy(res);
}