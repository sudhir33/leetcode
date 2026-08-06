bool isPalindrome(int x) {
    if(x<0)
    {
        return 0;
    }
    long long int temp,d,rev=0;
    temp=x;
    while(x!=0)
    {
        d=x%10;
        x=x/10;
        rev=rev*10+d;
    }
    if(temp==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
/*

num=123
temp=num//temp=123
rev=0

d=num%10--> 3
num=num/10--> 12
rev=rev*10+d-->3

d=num%10--> 2
num=num/10--> 1 
rev=rev*10+d-->32


d=num%10--> 1
num=num/10--> 0 
rev=rev*10+d-->321

temp==rev  --> 123==321



10)1(0
   0
   ----
   1




1. fun name
2. one
3. int
4. int (0,1)
*/