class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int writeIndex = 0;
        for(int x : nums){
            if(x != val){
                nums[writeIndex] = x;
                writeIndex++;
            }
        }
        nums.resize(writeIndex);
        return nums.size();
    }
};