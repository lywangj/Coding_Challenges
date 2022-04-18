# Cproj_03 Copy List with Random Pointer

(Referance from LeetCode Problem No.138)
A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.

Task:
- Construct a deep copy of the list provided
- None of the pointers in the new list should point to nodes in the original list.

Solutions:
- C++
- OOP (not essential for solving this problem, just for practising)
- Linked List
- Hashmap

Time complexity: O(N)
- N stands for the numbers of nodes 
- actually 2N (going through the list twice: one for create nodes, one for add pointers)

Space complexity: O(N)
- N stands for the numbers of nodes 
- Hashmap for storing

Constraints:
- 0 <= n <= 1000
