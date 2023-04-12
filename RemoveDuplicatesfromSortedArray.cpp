#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int check;
        
        for ( int i = 1; i < nums.size(); i++ )
        {
            check = nums[i-1];
            
            if ( check == nums[i] )
            {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        
        return nums.size();
    }
};