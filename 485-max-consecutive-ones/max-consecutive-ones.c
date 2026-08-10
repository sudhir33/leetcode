int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i,co=0,mco=0;//[1,1,0,1,1,1]
                     // 0 1 2 3 4 5
    for(i=0;i<numsSize;i++)//i=6   numsSize=6  6<6
    {
        if(nums[i]==1)//num[5]==1 1==1
        {
            co++;//3
        }
        else
        {
            if(mco<co)// 0<2
            {
                mco=co;//mco=2
            }
            co=0;//0
        }
    }
    if(mco<co)// 0<2
    {
        mco=co;//mco=2
    }
    return mco;
}
/*
3

*/