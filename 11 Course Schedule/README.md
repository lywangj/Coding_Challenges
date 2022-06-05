# Course Schedule

For a total of **numCourses** courses, labeled from 0 to **numCourses**-1,

a given course schedule, **prerequisites**, with an array[i]=[A,B], which indicates that students must take course B before take course A.

check this course schedule is feasible (students are able to finish all courses)

- numCourses = 5
- prerequisites = [[2,1],[1,0],[0,3],[0,4],[0,2]]
- result : false
- explain : this graph contain at least one cycle (2->1, 1->0, 0->2). Thus, this schedule is NOT feasible, returning false

Task:
- Use graph to check whether there is a cycle (if yes, return false)

Solutions:
- C++
- Topological sort
- Breadth-first search

Time complexity: O(N+E)
- N as the total number of courses (nodes in graph)
- E as the total number of relations (edges in graph)

Space complexity: O(N+E)

Constraints:
- 1 <= numCourses <= 2000
- 0 <= prerequisites.length <= 5000
- All the pairs prerequisites[i] are unique
