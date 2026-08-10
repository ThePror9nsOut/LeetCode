class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        cpx = strs[0]

        for st in strs:
            smallest = min(len(cpx),len(st))
            
            cpx = cpx[:len(st)]
            for i in range(smallest):
                if cpx[i] != st[i]:
                    cpx = cpx[:i]
                    break
        
        return cpx