# Kadane's Algorithm - Maximum Subarray Sum

This repository contains a C++ implementation of **Kadane's Algorithm**, which is used to find the maximum sum of a contiguous subarray in an array of integers.

## 📜 Problem Statement
Given an array of integers (positive, negative, or zero), find the contiguous subarray with the largest sum.

**Example:**
Input: [-2, 1, -3, 4, -1, 2, 1, -5, 4]
Output: 6
Explanation: The subarray [4, -1, 2, 1] has the largest sum = 6


---

## 🚀 Algorithm Explanation
Kadane's Algorithm works by iterating through the array and keeping track of:
- **curr_max** → Maximum sum ending at the current position.
- **max_so_far** → Maximum sum found so far.

At each step:
1. Update `curr_max` as the maximum between the current element and `curr_max + current element`.
2. Update `max_so_far` if `curr_max` is greater.

**Time Complexity:** `O(n)`  
**Space Complexity:** `O(1)`

---

## 💻 How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/kadane-algorithm.git

g++ kadane.cpp -o kadane
./kadane
