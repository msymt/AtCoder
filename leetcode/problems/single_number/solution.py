class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        n_dict = {}
        for i in nums:
            if(i not in n_dict.keys()):
                n_dict[i] = 1
            else:
                n_dict[i] += 1
        for k,v in n_dict.items():
            if v == 1:
                return k
                