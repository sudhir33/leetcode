int minNumber(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int freq[10]={0};
    int i,j;
    int m1=nums1[0],m2=nums2[0];
    for(i=0;i<nums1Size;i++)
    {
        freq[nums1[i]]++;
        if(m1>nums1[i])
        {
            m1=nums1[i];
        }
    }
    for(i=0;i<nums2Size;i++)
    {
        
        freq[nums2[i]]++;
        if(m2>nums2[i])
        {
            m2=nums2[i];
        }
    }
    for(i=0;i<=9;i++)
    {
        if(freq[i]==2)
        {
            return i;
        }
    }
    if(m1<m2)
    {
        return m1*10+m2;
    }
    return m2*10+m1;
}
