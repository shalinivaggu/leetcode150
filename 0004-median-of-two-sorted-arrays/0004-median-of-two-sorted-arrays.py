class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        num = nums1 + nums2 
        n = len(num)
        num.sort()
        if n % 2 != 0 :
            return num[n // 2]
        else:
            return (num[n//2] + num[n//2 - 1 ]) / 2