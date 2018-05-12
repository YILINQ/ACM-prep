# leetcode 4
from heapq import *
class Solution:
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        if total number is odd, then find the middle one
        if total number is even, then find the middle two and average them
        data structure used: heap
        build max heap and then do pop()
        """
        total_len = len(nums1) + len(nums2)
        heap = []
        for item in nums1:
            heappush(heap, item)
        for item in nums2:
            heappush(heap, item)
        if total_len % 2 == 0:
            time_to_pop = total_len // 2
            for i in range(time_to_pop-1):
                heapq.heappop(heap)
            mid1 = heapq.heappop(heap)
            mid2 = heapq.heappop(heap)
            avg = (mid1 + mid2) / 2
        else:
            time_to_pop = total_len // 2
            for i in range(time_to_pop):
                heapq.heappop(heap)
            avg =  heapq.heappop(heap)
        return avg
