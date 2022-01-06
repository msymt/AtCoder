# 22. Generate Parentheses

Medium

https://leetcode.com/problems/generate-parentheses/

Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

## 考え方

(: right, ): leftとして考える．最初両方n個配置すると考えて，両方が0になったら，答えに追加する．また途中で，leftの数がrightの数を上回ったり，どちらかが0未満になると打ち切る．
