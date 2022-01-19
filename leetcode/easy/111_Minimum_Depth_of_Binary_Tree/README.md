# 111. Minimum Depth of Binary Tree

easy

https://leetcode.com/problems/minimum-depth-of-binary-tree/

Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

Note: A leaf is a node with no children.

## 考え方

- 葉が現れるまで再帰により，小さい深さの方を選ぶ(else)．
- 部分木が存在する場合は，存在する方を探索する．
- rootが葉の場合は1を返す
