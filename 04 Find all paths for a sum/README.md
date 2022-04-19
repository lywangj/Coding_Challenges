# Cproj_04 Find all paths for a sum

(Referance from LeetCode Problem No.112)
A binary tree with values on every nodes and an integer are given.

A root is a the first node in the tree, and a leaf is a node with no children.

- root = [5,4,8,11,null,13,4,7,2,null,null,null,1]
- targetSum = 22

Task:
- find a root-to-leaf path adding all values along which matches the targeted integer.

Solutions:
- C++
- deep-first search
- recursion
- iteration

Time complexity: O(N)
- maximun N will be the numbers of nodes in trees. 

Space complexity: O(1)
- no extra space is needed.

Constraints:
- 0 <= the number of nodes in tree <= 1000
