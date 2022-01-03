# 58. Length of Last Word

easy

https://leetcode.com/problems/length-of-last-word/

Given a string s consisting of some words separated by some number of spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

## 考え方

空白1つでsplitして，後ろから空白でない文字列の時，その長さを返す．
