class Solution:
    def find_median(self, v):
        v.sort() #initially sorting the list
        n=len(v)
        if n%2 == 0:
            return (v[int(n/2)-1]+v[int(n/2)])//2 #if length of list is even returning the floor average of middle two elements
        return v[int(n/2)]  #else returning the middle element

T=int(input())
for i in range(T):
    n = int(input())
    v = list(map(int,input().split())) 
    ob = Solution();
    ans = ob.find_median(v)
    print(ans)
