class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        lista = nums1 + nums2 
        lista.sort()
        n = len(lista)
        median = 0
        if (n % 2 == 0) :
            median = (lista[n//2] + lista[n//2 - 1]) / 2
        else:
            median = lista[n//2] 
        return median