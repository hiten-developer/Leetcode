class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0;
        unordered_map<char,int> mp;
        int diff,maxLen=0;
        while(right<s.size()){
            if(mp.find(s[right]) != mp.end()){
                if(mp[s[right]] >= left){
                    left = mp[s[right]] + 1;
                }
            }
            mp[s[right]] = right;
          
            diff = right - left +1;
            if(diff > maxLen){
                maxLen = diff;
            }
            right++;
        }
        return maxLen;
    }
};