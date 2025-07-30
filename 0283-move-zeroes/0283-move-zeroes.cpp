// Brute Force Approach
// TC: O(N) & SC: O(N)
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         vector<int> tempArray;
//         for (int i=0; i<nums.size(); i++) {
//             if(nums[i] != 0) {
//                 tempArray.push_back(nums[i]);
//             }
//         }

//         int numberOfZeroes = nums.size() - tempArray.size();

//         for(int j=0; j<numberOfZeroes; j++) {
//             tempArray.push_back(0);
//         }

//         nums = tempArray;
//     }
// };

// Optimal Approach (Using 2 Pointers)
// TC: O(N) & SC: O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                j = i;
                break;
            }
        }

        // No non zero numbers
        if(j == -1) return;

        for(int i = j+1; i < n; i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};