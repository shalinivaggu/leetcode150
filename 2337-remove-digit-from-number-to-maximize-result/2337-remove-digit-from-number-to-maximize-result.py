class Solution:
    def removeDigit(self, number: str, digit: str) -> str:
        val = [] 
        for i in range(len(number)):
            if number[i] == digit:
                newNum = number[:i] + number[i+1:]
                val.append(int(newNum))
        return str(max(val))