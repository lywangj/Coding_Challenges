# 08 Find K Closest Elements

Given an integer array sorted in ascending order.

 return the k closest integers to x in the given array.

- Input: arr = [1,2,3,4,5]
- k = 3
- x = 3
- Output: [2,3,4]

Task:
- try to find more then one soultions
- 

Solutions:
- C++
- binary search - most effecient
- priorty queueu (max heap)

Time complexity: O(nlogn)
- n as the number of integers in given array

Space complexity: O(n)
- n as the number of k integers

Constraints:
- 1 <= arr.length <= 1000
- 1 <= k <= arr.length
- -1000 <= arr[i], x <= 1000
