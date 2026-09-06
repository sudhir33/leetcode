class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long res=0;
        for(long i:nums)   {
            res=res^i;
        }
        res=res&-res;
        int g1=0,g2=0;
        for(long i:nums){
            long r;
            r=i&res;
            if(r==0)
            {
                g1=g1^i;
            }
            else
            {
                g2=g2^i;
            }
        }
        vector <int>d;
        d.push_back(g1);
        d.push_back(g2);
        return d;
    }
};