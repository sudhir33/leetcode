int gcd(int a,int b)
{
    int temp;
    while(a)
    {
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(a)
        b=b%a;
    }
    return b;
}
int gcdOfOddEvenSums(int n) {
    int os=0,es=0;
    os=n*n;
    es=n*(n+1);
    int res;
    res=gcd(os,es);
    return res;
}