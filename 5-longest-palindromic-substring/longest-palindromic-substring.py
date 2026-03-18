class Solution:
    def longestPalindrome(self, s: str) -> str:
        res=s[0]
        n=len(s)
        def expand(L,R):
            while L>=0 and R<n and s[L]==s[R]:
                L-=1
                R+=1
            return s[L+1:R]
            
        for i in range(n-1):
            odd=expand(i,i)
            even=expand(i,i+1)
            if len(odd)>len(res):
                res=odd
            if len(even)>len(res):
                res=even
        return res
        