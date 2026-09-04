class Solution:
    def convertToTitle(self, n: int) -> str:
        res = ""
        while n > 0:
            n -= 1  # 26 -> "Z"
            res += chr(n % 26 + ord('A'))
            n //= 26
        return res[::-1]
        