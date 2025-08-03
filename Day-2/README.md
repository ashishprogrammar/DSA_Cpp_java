# Sort a Stack — GFG Problem

## Problem Statement
Given a stack of integers, sort it in **descending order** such that **largest elements are at the top**. Only push/pop operations are allowed. Use recursion or an auxiliary stack.

### Sample Input
5
1 2 3 4 5
5 4 3 2 1


---

## Approach
- Use a **recursive algorithm**:
  1. Pop the top element until stack is empty.
  2. Reinsert each popped element in sorted order using `insertSorted`.
- `insertSorted(stack, x)` places `x` into the correct position so the stack remains sorted.

### Time Complexity
- **Worst-case:** O(n²) — because insertion may trip through all elements.
- **Best-case:** O(n²)

### Space Complexity
- **Auxiliary recursion depth** up to `n`.

---

## Files
- **sort_stack.cpp**: Recursive C++ implementation.
