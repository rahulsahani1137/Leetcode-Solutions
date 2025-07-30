// Brute Force Approach
// TC: O(n) & SC: O(n)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> tempArray;
        for (int i=0; i<nums.size(); i++) {
            if(nums[i] != 0) {
                tempArray.push_back(nums[i]);
            }
        }

        int numberOfZeroes = nums.size() - tempArray.size();

        for(int j=0; j<numberOfZeroes; j++) {
            tempArray.push_back(0);
        }

        nums = tempArray;
    }
};