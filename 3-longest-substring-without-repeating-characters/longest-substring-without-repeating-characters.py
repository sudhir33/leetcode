class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        res=0
        a=set()
        j=0
        for i in s:
            if i not in a:
                a.add(i)
                if res<len(a):
                    res=len(a)
            else:
                
                while i in a:
                    a.remove(s[j])
                    j+=1
                a.add(i)
        return res
        