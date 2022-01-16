# 108. Convert Sorted Array to Binary Search Tree

easy

https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.

## 考え方

2つの部分木間に深さ2つ以上の差がないtreeを考える．
中央値をrootとして，左右に部分木を設ける．
[-10, -3, 0, 5, 9]の時
root: 0
left subtree [-10, -3]
right subtree [5, 9]
こちらをさらに再帰的にすることで題意を満たす2分木が得られる．
