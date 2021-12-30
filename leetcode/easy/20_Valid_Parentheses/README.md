# 20. Valid Parentheses

easy

https://leetcode.com/problems/valid-parentheses/

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.

## 考え方

stackと辞書型を使い，括弧で始まった場合はpushし，括弧で終わった場合はstackからpopして，確認する．最終的にstackが空かどうかでT/F判定を行う．
