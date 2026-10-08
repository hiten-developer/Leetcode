class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count = 0, ans = k;
        string s = blocks;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'W') {
                count++;
            }

            if (i >= k && s[i-k] == 'W'){
                count--;
            }

            if (i >= k-1){
                ans = min(ans, count);
            }
        }

        return ans;
    }
};