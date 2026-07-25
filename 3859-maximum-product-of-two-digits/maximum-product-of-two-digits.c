int maxProduct(int n) {
    int d,x=0,y=0;
    while(n)
    {
        d=n%10;
        n=n/10;
        if(d>=x)
        {
            y=x;
            x=d;
        }
        else if(d>y)
        {
            y=d;
        }
    }
    return x*y;
}