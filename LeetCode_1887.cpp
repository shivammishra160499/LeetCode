class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int ans=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            ans+=i;
        }
        return ans;
        
    }
};