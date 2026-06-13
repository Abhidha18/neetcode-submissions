class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int more;
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            int findi=target-nums[i];
            if(mpp.find(findi)!=mpp.end())return {mpp[findi],i};
            mpp[nums[i]]=i;
        }
        return {};
    }
};
