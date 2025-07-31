// Brute Force Approach (Linear search for each element)
// TC: O(N^2) & SC: O(1)
// class Solution {
// public:
//     int singleNumber(std : vector<int>& nums) {
//         // Size of the array:
//         int n = nums.size();

//         // Run a loop for selecting elements:
//         for (int i = 0; i < n; i++) {
//             int num = nums[i]; // selected element
//             int cnt = 0;

//             // find the occurrence using linear search:
//             for (int j = 0; j < n; j++) {
//                 if (arr[j] == num)
//                     cnt++;
//             }

//             // if the occurrence is 1 return ans:
//             if (cnt == 1)
//                 return num;
//         }

//         // This line will never execute
//         // if the array contains a single element.
//         return -1;
//     }
// }

// Better Approach 1 (Using hashing)
// TC: O(N)+O(N)+O(N), where N = size of the array & SC: O(maxElement+1) where
// maxElement = the maximum element of the array. class Solution { public:
//     int singleNumber(std::vector<int>& nums) {
//         // size of the array:
//         int n = nums.size();

//         // Find the maximum element:
//         int maxi = nums[0];
//         for (int i = 0; i < n; i++) {
//             maxi = max(maxi, arr[i]);
//         }

//         // Declare hash array of size maxi+1
//         // And hash the given array:
//         vector<int> hash(maxi + 1, 0);
//         for (int i = 0; i < n; i++) {
//             hash[nums[i]]++;
//         }

//         // Find the single element and return the answer:
//         for (int i = 0; i < n; i++) {
//             if (hash[nums[i]] == 1)
//                 return nums[i];
//         }

//         // This line will never execute
//         // if the array contains a single element.
//         return -1;
//     }
// };

// Better Approach 2 (Hashing using the map data structure)
// TC:  O(N*logM) + O(M), where M = size of the map i.e. M = (N/2)+1. N = size
// of the array &  O(M) as we are using a map data structure. Here M = size of
// the map i.e. M = (N/2)+1.
// class Solution {
// public:
//     int singleNumber(std::vector<int>& nums) {
//         // size of the array:
//         int n = nums.size();

//         // Declare the hashmap.
//         // And hash the given array:
//         map<int, int> mpp;
//         for (int i = 0; i < n; i++) {
//             mpp[nums[i]]++;
//         }

//         // Find the single element and return the answer:
//         for (auto it : mpp) {
//             if (it.second == 1)
//                 return it.first;
//         }

//         // This line will never execute
//         // if the array contains a single element.
//         return -1;
//     }
// };

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