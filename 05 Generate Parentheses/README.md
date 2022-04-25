# 05 Generate Parentheses

A binary tree with values on every nodes and an integer are given.

A root is a the first node in the tree, and a leaf is a node with no children.

- Input: 3
- Output: "((()))","(()())","(())()","()(())","()()()"

Task:
- allow user to input a integer (larger than 0) as n.
- generate a series of strings, each contains n valid parentheses but with different order.

Solutions:
- C++
- backtrack
- dept-first search 
- recursion
- Cin

Time complexity: O(4^n / n^0.5)
- n as the number of parentheses generated in a string

Space complexity: O(4^n / n^0.5)

Constraints:
- 1 <= n <= 8


