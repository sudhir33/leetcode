int minOperations(int* nums, int numsSize, int k) {
    int count=0,i;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]<k)
        {
            count++;
        }
    }
    return count;
}