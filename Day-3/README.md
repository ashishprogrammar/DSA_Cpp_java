# 🔢 Small Factorial Calculator (C++)

This repository contains a C++ program that calculates the factorial of small positive integers (up to 100!) using **big integer multiplication**. It handles values too large for standard integer types by storing results digit-by-digit in an array.

---

## 🚀 Features

- Supports multiple test cases
- Computes large factorials (up to 100!)
- Simulates big integer operations using arrays
- Efficient and educational implementation

---

## 📥 Input Format

- The first line contains an integer `t` (number of test cases), `1 ≤ t ≤ 100`
- Then `t` lines follow, each containing an integer `n` where `1 ≤ n ≤ 100`

---

## 📤 Output Format

- For each test case, output the factorial of the given number `n` on a new line

---

## 🧠 Example

**Input**
3
5
10
6

**Output**
120
3628800
720


---

## 🛠️ How It Works

Since `100!` has **158 digits**, the program stores digits in an array and performs multiplication digit by digit (like how we do on paper). This avoids overflow and makes it suitable for educational purposes.

---

## 📂 Files

- `factorial.cpp` – Main source code file with implementation

---

## 📌 Usage

### Compile:
```bash
g++ factorial.cpp -o factorial
