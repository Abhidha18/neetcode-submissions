class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n=nums.size();
        vector<int>ans(n,1);
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        int suf=nums[n-1];
        for(int j=n-2;j>=0;j--){
            ans[j]=ans[j]*suf;
            suf*=nums[j];
        }
        return ans;
    }
};
