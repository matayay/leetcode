class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        running_sum = nums
        curr_sum = 0
        for i in range(len(nums)):
            curr_sum += nums[i]
            running_sum[i] = curr_sum

        return running_sum