class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows <= 1:
            return s
        
        x = 0
        y = 0
        dx = 0
        dy = 1
        index = 0

        out = ''
        size = len(s)
        array = [[] for i in range(numRows)]

        while index < size:
            array[y].append(s[index])
            index += 1

            x += dx
            y += dy

            if y == numRows-1:
                dx = 1
                dy = -1
            elif y == 0:
                dx = 0
                dy = 1
        
        for row in array:
            for c in row:
                out += c

        return out