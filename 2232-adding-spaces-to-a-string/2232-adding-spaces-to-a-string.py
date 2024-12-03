class Solution:
    def addSpaces(self, s: str, spaces: List[int]) -> str:
        new = ""
        old = 0
        for i in spaces:
            new += s[old:i] + " "
            old = i
        new += s[old:]
        return new