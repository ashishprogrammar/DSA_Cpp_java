# Next Greater Element

## 📝 Problem Statement

Given an array `arr[ ]` of size `N`, find the **next greater element** for each element in the array. The next greater element for an element `x` is the first greater element on the right side of `x`. If no such element exists, return `-1`.

## 📥 Sample Input
N = 4
arr[] = [4, 5, 2, 25]


## 🔍 Explanation

- 4 → 5
- 5 → 25
- 2 → 25
- 25 → -1

---

## 🔧 Approaches

### ✅ Brute Force
- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### ✅ Stack-Based (Right to Left Traversal)
- **Time Complexity:** O(n)
- **Space Complexity:** O(n)
- **Technique:** Monotonic Stack (Decreasing)

---

## 📁 Files

- `brute_force.cpp`: Simple nested loop approach.
- `stack_based.cpp`: Efficient approach using a stack.

