class Solution {
    public int[] limitOccurrences(int[] nums, int k) {
        int n=nums.length;
        int j=n;
        int count=1,i;
        for(i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                count++;
            }
            else
            {
                count=1;
            }
            if(count>k)
            {
                j--;
            }
        }
        int[] res=new int[j];
        res[0]=nums[0];
        int x=1;
        count=1;
        for(i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1] && count<k)
            {
                res[x]=nums[i];
                count++;
                x++;
            }
            else if(nums[i]!=nums[i-1])
            {
                count=1;
                res[x]=nums[i];
                x++;
            }
        }
        return res;
    }
}