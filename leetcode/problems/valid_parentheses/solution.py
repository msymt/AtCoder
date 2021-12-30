class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        s_dict = {"]":"[", "}":"{", ")":"("}
        for char in s:
            if char in s_dict.values():
                stack.append(char)
            elif char in s_dict.keys():
                if stack == [] or stack.pop() != s_dict[char]:
                    return False
            else:
                return False
        return stack == []