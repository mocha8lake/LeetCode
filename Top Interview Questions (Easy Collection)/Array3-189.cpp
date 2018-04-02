// 189. Rotate Array

// Rotate an array of n elements to the right by k steps.

// For example, with n = 7 and k = 3, 
// the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].

// Note:
// Try to come up as many solutions as you can, 
// there are at least 3 different ways to solve this problem.

// Hint:
// Could you do it in-place with O(1) extra space?
// Related problem: Reverse Words in a String II

// Credits:
// Special thanks to @Freezen for adding this problem and creating all test cases.

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int temp1=0;
        int temp2=0;
        if(n==0||n==1)
        {
            return;
        }
        
        for(int i=0;i<k;i++)
        {
            temp1=nums[0];
            for(int j=0;j<n-1;j++)
            {
                temp2=nums[j+1];
                nums[j+1]=temp1;
                temp1=temp2;
            }
            nums[0]=temp1;
        }
        
        return;
    }
};

// Submission Detail
// 33 / 33 test cases passed.
// Runtime: 385 ms
// Your runtime beats 1.01 % of cpp submissions.
