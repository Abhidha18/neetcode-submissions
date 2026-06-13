class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1,high=*max_element(piles.begin(),piles.end());
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=(piles[i]+mid-1)/mid;
            }
            if(sum<=h){
                ans=min(ans,mid);
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        if(ans==INT_MAX)return -1;
        return ans;
        
    }
};
