from collections import deque
from typing import List

class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        deq = deque()
        result = []
        i = 0

        for j in range(len(nums)):
            # Remove all smaller elements from the back
            while deq and deq[-1] < nums[j]:
                deq.pop()
            deq.append(nums[j])

            # If window size < k, just continue
            if j - i + 1 < k:
                continue

            # If window size == k
            if j - i + 1 == k:
                # Front of deque is the max
                result.append(deq[0])

                # Remove the outgoing element if it was max
                if nums[i] == deq[0]:
                    deq.popleft()

                i += 1

        return result