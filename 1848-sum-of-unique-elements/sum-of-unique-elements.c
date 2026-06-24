int sumOfUnique(int* nums, int numsSize) {
    int count[101]={0};
    int i;
    for(i=0;i<numsSize;i++)
    {
        count[nums[i]]++;
    }
    int res=0;
    for(i=1;i<101;i++)
    {
        if(count[i]==1)
        {
            res=res+i;
        }
    }
    return res;

}