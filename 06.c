class Solution:
    def missingNum(self, arr):
        n = len(arr) + 1
        total_sum = n * (n + 1)
        return total_sum - sum(arr)
