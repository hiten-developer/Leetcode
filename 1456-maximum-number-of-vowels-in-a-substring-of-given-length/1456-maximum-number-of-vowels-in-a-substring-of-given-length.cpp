class Solution {
public:
    int maxVowels(string s, int k) {
        string vowel = "aeiou";
        int max;
        int count = 0;
        for(int i=0;i<k;i++){
            if (vowel.find(s[i]) != string::npos){
                count++;
            }
        }
        max = count;
        for(int i=k;i<s.size();i++){
            
            if (vowel.find(s[i]) != string::npos){
                count++;
            }
            if (vowel.find(s[i-k]) != string::npos){
                count--;
            }
            if(max < count ){
                max = count;
            }
        }
        return max; 
    }
};