# 07 Intersection of Two Arrays

(To be updated)

With Two given integer arrays, return a array with either their intersections or differ

A root is a the first node in the tree, and a leaf is a node with no children.

- Input: nums1 = [1,2,2,1], nums2 = [2,2]
- Output: 
    - Intersection: [2,2]
    - Difference: [1,1], []

Task:
- generate new arrays with the intersections and differences of twn given arrays
    - return one array for intersection of nums1 and nums2
    - return two array for differences in both nums1 and nums2
- considering the given arrays are sorted or un-sorted.

Solutions:
- C++
- unique set
- hash map
- binary search

For intersecton :
- N as the number of integers in each array
- Min O with hash map
    - Time complexity: O(2N)
    - Space complexity: O(N)

For difference : 
- N as the number of integers in each array
- Min O with binary search
    - Time complexity: O(2N+2NlogN)
    - Space complexity: O(1)

Constraints:
- 1 <= nums.length <= 1000
- 0 <= nums[i] <= 1000



