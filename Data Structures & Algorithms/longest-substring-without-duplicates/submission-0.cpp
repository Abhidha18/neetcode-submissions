class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        set<int>st;
        int cnt=0,maxi=0,left=0,right=0;
        while(right<s.size()){
            if(st.find(s[right])==st.end()){
                cnt++;
                maxi=max(cnt,maxi);
                st.insert(s[right]);
                right++;
            }
            else{
                cnt--;
                st.erase(s[left]);
                left++;
            }
        }
        return maxi;
    }
};
