#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;


vector<int> twoSum(vector<int>& nums, int target) 
{
    unordered_map<int, int> hash;
    vector<int> results;
    int temp;

    for (int i = 0; i < nums.size(); i++)
    {
        temp = target - nums[i];

        if (hash.find(temp) != hash.end())
        {
            results.push_back(hash[temp]);
            results.push_back(i);
            return results;
        }

        hash.insert(pair<int, int> (nums[i], i));
    }

    return results;
}