class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s_splited = s.split(" ")
        for i in range(len(s_splited) - 1, -1, -1):
            if s_splited[i] != "":
                return len(s_splited[i])