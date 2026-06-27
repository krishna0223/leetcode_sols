class Solution(object):
    def twoSum(self, nums, target):
        hm = {}
        for i,num in enumerate(nums):
            if target - num in hm:
                return [i,hm[target-num]]
            hm[num] = i
        
