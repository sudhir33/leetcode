public class Solution {
    public IList<int> TargetIndices(int[] nums, int target) {
        nums.Sort();
        List<int> res=new List<int>();
        int i;
        for(i=0;i<nums.Length;i++)
        {
            if(target==nums[i])
            {
                res.Add(i);
            }
        }
        return res;
    }
}