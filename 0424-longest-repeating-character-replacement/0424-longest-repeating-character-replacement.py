class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        count = {} #declaring hashset to count the number of occurances of each characters
        result = 0 #length of the longest substring

        l = 0 #declaring left pointer to 0
        for r in range(len(s)):
            count[s[r]] = 1 + count.get(s[r],0) #increasing the count of the character if does not exist then default value 0

            while (r - l + 1) - max(count.values()) > k: #lenght of the windows - count of the most frequent character > no. of replacements allowed
                count[s[l]] -= 1 #taking count of character at the left position and decrementing it by 1
                l += 1 #increasing the value of the left pointer if 

            result = max(result, r - l + 1) #size of the window
        return result