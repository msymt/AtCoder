# 66. Plus One

easy

https://leetcode.com/problems/plus-one/

You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

## 考え方

Listのサイズが0の時は1を追加．
末尾が9の時は，末尾を除いて再帰．その後0を末尾に追加．
それ以外の時は末尾をインクリメント．
