// In-Place Modification, TC O(n)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i-1];
        }
        return nums;
    }
};

/*
// Using push_back (amortized O(1) time complexity). and the solution have O(n) TC
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningSum;
        int currentSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];
            runningSum.push_back(currentSum);
        }
        return runningSum;
    }
};
*/