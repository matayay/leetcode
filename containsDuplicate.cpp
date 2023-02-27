#include <iostream>
#include <vector>

using namespace std;


bool containsDuplicate(vector<int>& nums) 
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i+1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                return true;
            }
        }
    }

    return false;
}


int main()
{
    bool result;

    vector<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    // [1, 2, 3, 4]

    result = containsDuplicate(list);
}