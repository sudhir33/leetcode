int maxFrequencyElements(int* nums, int numsSize) {
    int freq[101]={0};
    int i,max=0;
    for(i=0;i<numsSize;i++)
    {
        freq[nums[i]]++;
        if(max<freq[nums[i]])
        {
            max=freq[nums[i]];
        }
    }
    int res=0;
    for(i=0;i<101;i++)
    {
        if(max==freq[i])
        {
            res+=freq[i];
        }
    }
    return res;
}