class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      int k = s1.size();
    if (k > (int)s2.size()) return false;

    vector<int> need(26, 0), cnt(26, 0);
    for (char c : s1) need[c - 'a']++;                 
    for (int i = 0; i < k; i++) cnt[s2[i] - 'a']++;    

    if (cnt == need) return true;

    for (int i = k; i < (int)s2.size(); i++) {
        cnt[s2[i] - 'a']++;                             
        cnt[s2[i - k] - 'a']--;                         
        if (cnt == need) return true;
    }
    return false;
    }
};