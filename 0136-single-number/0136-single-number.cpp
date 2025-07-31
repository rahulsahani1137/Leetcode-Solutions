// Optimal Approach (Using XOR)
// TC: O(n), SC: O(1)
class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }
};