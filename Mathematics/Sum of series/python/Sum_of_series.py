class Solution:
    def seriesSum(self, n : int) -> int:
        return (n*(n+1)//2)
t = int(input())#no of inputs
for _ in range(t):
    n = int(input())#input number
    obj = Solution()
    res = obj.seriesSum(n)
    print(res)#printing result
