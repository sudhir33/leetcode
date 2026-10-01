int searchInsert(int* nums, int numsSize, int target) {
    int i;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==target || nums[i]>target)
        {
            return i;
        }
    }
    return i;
    
    //           i=5
    // 1 3 5 6 7   tar 100
    // 0 1 2 3 4 
}