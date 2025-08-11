# Maximum of All Subarrays of Size k (Deque Approach)

This repository contains a C++ implementation of finding the maximum element in every contiguous subarray of size `k` using a **deque**.  
The approach runs in **O(n)** time, making it highly efficient for large arrays.

---

## Problem Statement
Given an array of integers and a number `k`, find the maximum for each and every contiguous subarray of size `k`.

### Example
**Input**
n = 8
arr = [1, 3, -1, -3, 5, 3, 6, 7]
k = 3


**Output**
3 3 5 5 6 7


---

## Approach
We use a **double-ended queue (deque)** to store indices of elements in the current window:
1. Remove indices of elements **out of the current window**.
2. Remove elements from the back that are **smaller than the current element** (as they will never be the maximum).
3. The **front of the deque** always stores the index of the maximum element for the current window.

---

## Time Complexity
- **O(n)** — each element is added and removed from the deque at most once.
- **Space Complexity:** O(k) for the deque.

--

g++ main.cpp -o main
./main
