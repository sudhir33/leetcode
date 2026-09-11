int addDigits(int num) {
    int rem,res=0;
    while(num)
    {
        rem=num%10;
        num=num/10;
        res=res+rem;
        if(num==0 && res>9)
        {
            num=res;
            res=0;
        }
    }
    return res;
}