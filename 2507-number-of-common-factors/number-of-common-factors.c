int min(int a,int b)
{
	if(a>b)//10 5
	{
		return b;
	}
	return a;
}
int commonFactors(int a, int b) {
    int i,res=0;
    int m=min(a,b);
    i=1;
    while(1)
    {
        if(i>a || i>b)break;
        if(a%i==0 && b%i==0) res++;
        i++;
    }
	return res;
}