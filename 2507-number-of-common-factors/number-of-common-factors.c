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
    for(i=1;i<=m;i++)
    {
    	if(a%i==0 && b%i==0)
    	{
    		res++;
		}
	}
	return res;
}