// Remove Duplicates from Sorted Array
//
// Given a sorted array, remove the duplicates in-place 
// such that each element appear only once 
// and return the new length.
// Do not allocate extra space for another array, 
// you must do this by modifying the input array in-place 
// with O(1) extra memory.

// Example:
// Given nums = [1,1,2],

// Your function should return length = 2, 
// with the first two elements of nums being 1 and 2 respectively.
// It doesn't matter what you leave beyond the new length.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int len=nums.size();
        int count=1;
        
        if(len==0)
            return 0;
            
        for(int j=1;j<len;j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
                count++;
            }
        }
        
        for(int m=count;m<len;m++)
            nums[m]=NULL;
        
        return count;
    }
};

// Submission Detail:
// 161 / 161 test cases passed.
// Runtime: 29 ms
// Your runtime beats 79.44 % of cpp submissions.
