class Solution {
    public int countSpecialIntegers(int[] nums) {
        int res=0,i;
        HashMap<Integer,Integer> map= new HashMap();
        for(i=0;i<nums.length;i++)
        {
            if(map.containsKey(nums[i]) && i-map.get(nums[i])==1)
            {
                map.put(nums[i],i);
            }
            else if(map.containsKey(nums[i]) && i-map.get(nums[i])!=1)
            {
                map.put(nums[i],-1);
            }
            else
            {
                map.put(nums[i],i);
            }
        }
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) 
        {
            if(entry.getValue()!=-1)res++;
            
        }
        return res;
    }
}