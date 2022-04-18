

With an integer k and a integer array, nums, as the original stream,

find the kth largest number after add each item in another array, items, to the stream 


Task:
- create a class to find the kth largest element in a stream. 
- add each element to the stream, and then find the kth largest element

Solutions:
- C++
- OOP (not essential for solving this problem, just for practising)
- min heap

Time complexity: O(N⋅log(N) + M⋅log(k))
- N⋅log(N): N as the number of elements in the original stream, and for each heap operation, costing log(N)
- M⋅log(k): M as the number of adding elements

Space complexity: O(N)

Constraints:
- k is an integer larger than 1.
- 0 <= nums.length <= 1000
- 1 <= items.length <= 1000
