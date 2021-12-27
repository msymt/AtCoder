# 2. Add Two Numbers

Medium

https://leetcode.com/problems/add-two-numbers/

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

## 考え方

再帰を用いて，先頭から順に足し合わせる．キャリービットは次の再帰呼び出しの引数に追加する．
逐次実行も実装したが，メモリ超過となった．
