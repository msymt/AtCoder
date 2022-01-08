# 14. Longest Common Prefix

easy

https://leetcode.com/problems/longest-common-prefix/

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

## 考え方

最も短い文字列を取得し，その単語を1文字ずつチェック．その中で違う文字があったら，そこまでの文字列を返す
