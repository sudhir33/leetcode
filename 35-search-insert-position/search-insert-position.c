int searchInsert(int* nums, int numsSize, int target) {
    int i;
    for(i=0;i<numsSize;i++)   
    {
        if(nums[i]==target)
        {
            return i;
        }
        else if(nums[i]>target)
        {
            return i;
        }
    }
    return i;
}

/*
         
2 6 8 10 12 15 20
0 1 2  3  4  5 6

target=20

*/