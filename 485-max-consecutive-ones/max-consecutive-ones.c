int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i,maxcount=0,count=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==1)
        {
            count++;
        }
        else
        {
            if(count>maxcount)
            {
                maxcount=count;
            }
            count=0;
        }
    }
    if(count>maxcount)
    {
        maxcount=count;
    }
    return maxcount;
}