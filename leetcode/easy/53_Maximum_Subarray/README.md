# 53. Maximum Subarray

easy

https://leetcode.com/problems/maximum-subarray/

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

Example 1:

```
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
```

Example 2:
```
Input: nums = [1]
Output: 1
```

Example 3:

```
Input: nums = [5,4,-1,7,8]
Output: 23
```

## 考え方

index-iを部分配列の最後の要素として持つ場合の最大和として捉える．index-iより前の部分和とindex-iに本来格納されていた値を比較し，大きい方をindex-iに再格納することで実現する．

## 参考

- https://zenn.dev/ike_pon/articles/d709eaf7ba5255a22b1d