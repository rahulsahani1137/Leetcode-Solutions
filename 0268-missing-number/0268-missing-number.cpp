// Brute Force Approach
// TC: O(N^2) & SC: O(1)
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         for(int i = 0; i <= n; i++) {
//             bool found = false;
//             for(int j = 0; j < n; j++) {
//                 if(nums[j] == i) {
//                     found = true;
//                     break;
//                 }
//             }
//             if(!found) return i;
//         }
//         // Should never reach here
//         return -1;
//     }
// };

// Better Approach (Using hashing)
// TC: O(N) & SC: O(N)
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> hash(n+1, 0);

//         for (int num : nums)
//             hash[num] = 1;

//         for (int i = 0; i <= n; i++)
//             if (hash[i] == 0)
//                 return i;

//         return -1; // Shouldn't be reached
//     }
// };


// Optimal Approach 1 (Using natural nos. sum)
// TC: O(N) & SC: O(1)
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         for (int i = 0; i < nums.size(); i++) {
//             if (i != nums[i])
//                 return i;
//         }
//         return nums.size();
//     }
// };

// Optimal Approach 2 (Using XOR operator)
// TC: O(N) & SC: O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0, xor2 = 0;
        int n = nums.size() - 1;
        for(int i = 0; i < n; i++) {
            xor2 = xor2 ^ a[i];
            xor1 = xor1 ^ (i+1);
        }

        xor1 = xor1 ^ nums.size();
        return xor1 ^ xor2;
    }
};