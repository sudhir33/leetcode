int digit_count(int num)
{
    int dc=0;
    while(num)
    {
        dc++;
        num=num/10;
    }
    return dc;
}
int fun(int *num,int n)
{
    int rem,res=0,i;
    for(i=1;i<=n;i++)
    {
        rem=(*num)%10;
        res=res+rem;
        *num=(*num)/10;
    }
    return res;
}

int countSymmetricIntegers(int low, int high) {// low=1000 high=1100
    int i,count=0;
    for(i=low;i<=high;i++)
    {
        
        int dc=digit_count(i);//4
        if(dc%2)continue;
        int n=dc/2;
        int cpy=i;
        int lds=fun(&cpy,n);// 10,2   ids=0
        int fds=fun(&cpy,n);//10,2   fds=1
        if(lds==fds)
        {
            count++;
        }
    }
    return count;
}
/*
  for i from low to high loop:
        find dc of i
        n=dc/2
        find last n digits sum
        find first n digits sum
        compare both then incd count
1000
1100
count=2

1010

*/