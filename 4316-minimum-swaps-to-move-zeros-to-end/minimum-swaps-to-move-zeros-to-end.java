class Solution {
    public int minimumSwaps(int[] nums) {
        int i,zc=0;
        i=0;
        for(i=0;i<nums.length;i++)
        {
            if(nums[i]==0)
            {
                zc++;
            }
        }
        i=nums.length-1;
        int res=0,j;
        for(j=1;j<=zc;j++)
        {
            if(nums[i]!=0)
            {
                res++;
                
            }
            i--;
        }
        return res;
    }
}