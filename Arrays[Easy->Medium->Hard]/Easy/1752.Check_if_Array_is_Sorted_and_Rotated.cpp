// Why this matters: 
// Teaches how to handle wrap-around conditions in circular data structures.
// Essential for understanding data integrity in circular buffers used in real-time systems.
// Time Complexity: O(n) | Space Complexity: O(1)

// If array is sorted and rotated, the condition {nums[i] > nums[(i + 1) % n]} get True for <=1
class Solution {
public:
    bool check(vector<int>& nums) {
        int drops = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            
            if (nums[i] > nums[(i + 1) % n]) {
                drops++;
            }
        }
        return drops <= 1;
    }
};
