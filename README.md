# Subarray-Sum-Equals-K

给定一个数组和一个target，计算数组中连续数值之和等于target的“子数组”的个数。

思路：
我的方法：两层遍历，外层循环从第一个数开始，内层从i+1开始，相加判断和是否等于target，相等则res++。但是没有AC，只通过了3/4的例子。

ac解法：定义一个map，其key为sum，value为“子数组”的个数。
       for循环中一直在求和，当key为（sum-target）时，res+=value。若m[sum]不为零，则表明之前有子数组，目前数组-之前的子数组，
       又是一个满足条件的子数组。


