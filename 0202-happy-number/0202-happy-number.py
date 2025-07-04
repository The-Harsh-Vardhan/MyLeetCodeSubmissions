class Solution:
    def isHappy(self, n: int) -> bool:
        s = set()  # to keep track of numbers we've already seen
        
        def rep(i):
            if i == 1:  # if we reach 1, it's a happy number
                return True
            if i in s:  # if we've already seen this number, we're in a cycle
                return False
            s.add(i)  # add the number to the set of seen numbers
            a = 0
            for j in str(i):  # calculate the sum of the squares of digits
                a += int(j) * int(j)
            return rep(a)  # recursively check the sum of squares
            
        return rep(n)  # start the process with the given number n