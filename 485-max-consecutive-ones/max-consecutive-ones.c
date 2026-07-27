int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i,oc=0,moc=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==1)
        {
            oc++;
        }
        else
        {
            if(oc>moc)
            {
                moc=oc;
            }
            oc=0;
        }
    }
    if(oc>moc)
    {
        moc=oc;
        oc=0;
    }
    return moc;

//                        i
// 1 1 0 1 1 1 0 1 1 1 1
// 0 1 2 3 4 5 6 7 8 9 10
// oc=4  moc=4   moc<oc  


}
