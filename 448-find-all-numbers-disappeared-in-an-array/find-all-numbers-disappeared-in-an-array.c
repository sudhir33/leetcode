/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *res=(int*)calloc((numsSize+1),sizeof(int));
    int *res1=(int*)calloc((numsSize+1),sizeof(int));
    int i,j=0;
    for(i=0;i<numsSize;i++)
    {
        res[nums[i]]++;
    }
    for(i=1;i<numsSize+1;i++)
    {
        if(res[i]==0)
        {
            res1[j++]=i;
        }
    }
    *returnSize=j;
    return res1;

}