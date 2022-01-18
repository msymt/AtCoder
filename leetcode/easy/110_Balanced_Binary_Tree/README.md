# 110. Balanced Binary Tree

easy

https://leetcode.com/problems/maximum-depth-of-binary-tree/

Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:

a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

## 考え方

木の左右を再帰で探索し，DFSで葉まで到達したら，深さの差が1より大きいか確かめる．2以上であれば，条件を満たさないため，-1を返す．一度-1を返すと-1を返し続け最終的に`self.df(root) = -1`となる．
