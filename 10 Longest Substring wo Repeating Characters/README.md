# Longest Substring without Repeating Characters

Allow user to input a string, which consists of English letters, digits, symbols and spaces.

find the length of the longest substring without repeating characters

- Input string = "bbabcabcdd"
- Output: 4
- explain: the longest substring w/o repeating characters is "abcd", and the length is 4.

Task:
- try to find the efficient solutions (considering either time complexity and space complexity)

Solutions:
- C++
- Hashmap
- Dictionary

### Solution1. Hashmap 
use Hashmap to trace the start point of substring

Time complexity: O(n)
- n as the length of input string 

Space complexity: O(n)

#
### Solution2. Dictionary
setup an integer array as dictionary to store all the unrepeating characters in the given string

Time complexity: O(n)
- n as the length of input string 

Space complexity: O(n)
- n as the length of dictionary (storing max. 256 types of characters)

Constraints:
- 0 <= string.length <= 10000
