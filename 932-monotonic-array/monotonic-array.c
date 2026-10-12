bool isMonotonic(int* nums, int numsSize) {
    int inc=1,dec=1,i;
    for(i=1;i<numsSize;i++)
    {
        if(nums[i]>=nums[i-1])
        {
            inc++;
        }
        if(nums[i]<=nums[i-1])
        {
            dec++;
        }
    }
    if(inc==numsSize || dec==numsSize)
    {
        return 1;
    }
    return 0;
}