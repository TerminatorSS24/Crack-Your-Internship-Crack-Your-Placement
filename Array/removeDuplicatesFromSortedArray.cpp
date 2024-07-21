#include<bits/stdc++.h>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        int i = 0; // Pointer to the last unique element
        int n = nums.size();
        
        for (int j = 1; j < n; j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j]; // Update nums[i+1] with the new unique element
            }
        }
        
        return i + 1; // Return the number of unique elements
    }
};
