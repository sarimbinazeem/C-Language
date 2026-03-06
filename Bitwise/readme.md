# 🔢 Bitwise Operators in C

Welcome to this section of my **C Language Practice Exercises** repository.  
This folder focuses on **bitwise operators in C**, which allow a program to manipulate data at the **bit level**.

---

## 📘 Overview

Bitwise operators work directly on the **binary representation of integers**.  
They are useful for **low-level programming, optimization, and hardware interfacing**, where controlling individual bits is necessary.

The exercises in this folder help you understand:  
- How to manipulate individual bits of a number  
- Efficient arithmetic and logical operations at the bit level  
- Applications in flags, masks, and embedded programming

---

## 🧩 Topics Covered

### 1. AND Operator `&`
- Performs a **bitwise AND** between two numbers
- Sets each bit to `1` only if **both corresponding bits are 1**
- Example: `5 & 3` → `0101 & 0011 = 0001` → `1`

### 2. OR Operator `|`
- Performs a **bitwise OR** between two numbers
- Sets each bit to `1` if **either corresponding bit is 1**
- Example: `5 | 3` → `0101 | 0011 = 0111` → `7`

### 3. XOR Operator `^`
- Performs a **bitwise exclusive OR**
- Sets each bit to `1` if **only one of the bits is 1**
- Example: `5 ^ 3` → `0101 ^ 0011 = 0110` → `6`

### 4. NOT Operator `~`
- Performs a **bitwise NOT** (one’s complement)
- Inverts all bits of a number
- Example: `~5` → `~0101 = 1010` → `-6` (in two’s complement representation)

### 5. Left Shift `<<`
- Shifts bits of a number to the **left** by a specified count
- Each shift multiplies the number by 2
- Example: `5 << 1` → `0101 << 1 = 1010` → `10`

### 6. Right Shift `>>`
- Shifts bits of a number to the **right** by a specified count
- Each shift divides the number by 2 (integer division)
- Example: `5 >> 1` → `0101 >> 1 = 0010` → `2`

---

## 🎯 Importance of Bitwise Operators

- Perform **fast arithmetic operations** using bits  
- Control **flags and masks** efficiently in programs  
- Essential in **embedded systems, device drivers, and graphics programming**  
- Used in **encryption, compression, and network protocols**  
- Helps in optimizing memory and computation at a low level  

---

## ✅ Learning Outcomes

After completing the exercises in this section, you will be able to:

- Understand the binary representation of integers  
- Use `&`, `|`, `^`, `~`, `<<`, and `>>` operators effectively  
- Manipulate specific bits in a number  
- Implement flag and mask-based logic  
- Apply bitwise operations in real-world applications such as encoding and compression  

---

## 🧪 Practice Objective

- Strengthen understanding of bit-level operations  
- Solve problems requiring efficient integer manipulation  
- Prepare for coding challenges, interviews, and low-level system programming  
- Learn optimization techniques using minimal memory and CPU cycles  

---

## 🚀 Next Topic

After mastering bitwise operators, move on to:  
- Conditional Operators and Logical Operators  
- Loops with Bitwise Manipulation  
- Functions and Recursion  

Happy Coding! 💻✨