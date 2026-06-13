class Solution {
public:
    bool isAnagram(string s, string t) {

        int n=s.size();
        int m=t.size();
        vector<int>alpha(26,0);

        for(int i=0;i<n;i++){
            int ch=(int)s[i]-97;
            alpha[ch]++;
        }
        for(int i=0;i<m;i++){
            int ch=(int)t[i]-97;
            if(alpha[ch]==0)return false;
            alpha[ch]--;
        }
        for(int i=0;i<26;i++){
            if(alpha[i]!=0)return false;
        }
        return true;
    }
};
