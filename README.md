# Subarray-Sum-Equals-K

给定一个数组和一个target，计算数组中连续数值之和等于target的“子数组”的个数。

思路：
我的方法：两层遍历，外层循环从第一个数开始，内层从i+1开始，相加判断和是否等于target，相等则res++。
