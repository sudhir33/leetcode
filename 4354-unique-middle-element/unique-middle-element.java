class Solution {
    public boolean isMiddleElementUnique(int[] nums) {
        HashMap<Integer,Integer> map=new HashMap<>();
        int i;
        int n=nums.length;
        int m=nums[n / 2];
        for(i=0;i<n;i++)
        {
            if(map.containsKey(nums[i]))
            {
                map.put(nums[i], map.get(nums[i]) + 1);
            }
            else
            {
                map.put(nums[i],1);
            }
            
        }
        if(map.get(m) == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}