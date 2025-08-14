# Next Permutation — GFG 160 Days Challenge (Day 5)

## Problem Statement
Given an array `arr[]` representing a permutation of numbers, rearrange the array into its next lexicographically greater permutation. If such an arrangement is not possible (i.e., the array is the highest permutation), rearrange it to the smallest possible order (sorted ascending).

**Source:** [GeeksforGeeks - Next Permutation](https://practice.geeksforgeeks.org/problems/next-permutation5226)

---

## Approach

We use the **standard algorithm** for finding the next permutation in **O(n)** time and **O(1)** space:

1. **Find Pivot:**  
   Traverse from the end to find the first index `i` such that `arr[i] < arr[i+1]`.

2. **Find Successor:**  
   If such `i` exists, traverse from the end to find the smallest element `arr[j]` greater than `arr[i]` and swap them.

3. **Reverse Suffix:**  
   Reverse the subarray from `i+1` to the end to get the smallest lexicographic order after the pivot.

4. **If No Pivot Exists:**  
   If no such `i` is found, the array is in descending order. Reverse the entire array.

---

## Example
6
1 2 3 6 5 4


**Steps:**
- `i = 2` (value = 3)
- `j = 5` (value = 4)
- Swap → `1 2 4 6 5 3`
- Reverse from index `3` → `1 2 4 3 5 6`

**Output:**
1 2 4 3 5 6

---

## Complexity
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)

---

## How to Run
```bash
g++ next_permutation.cpp -o next_permutation
./next_permutation




**Input:**

