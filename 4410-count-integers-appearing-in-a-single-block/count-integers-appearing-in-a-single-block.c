int countSpecialIntegers(int* nums, int numsSize) {
    int s[101]={0},res=0,i;
    for(i=0;i<numsSize;i++)
    {
        if(i==0 || nums[i]!=nums[i-1])
        {
            s[nums[i]]++;
        }
    }
    for(i=0;i<101;i++)
    {
        if(s[i]==1)
        {
            res++;
        }
    }
    return res;
}