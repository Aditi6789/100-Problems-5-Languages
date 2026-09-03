# 001 — Reverse a String

## Problem

Given a string, reverse it without using a built-in reverse function.

**Example:**

```text
Input:  Hello
Output: olleH
```

---

## Logic

1. Find the length of the string.
2. Start from the **last index**.
3. Move towards index `0`.
4. Add each character to `reversedStr`.

If the string length is `5`, the indexes are:

```text
H   e   l   l   o
0   1   2   3   4
            ↑
       last index
```

So:

```text
last index = length - 1
```

---

## Concepts Learned

* String declaration
* String length
* String indexing
* Character access
* `for` loop
* Reverse loop
* Output syntax
* Required libraries / header files
* Language-specific syntax differences

---

## Syntax Refresh

| Concept   | Java                   | Python        | JavaScript         | C++                   | C                     |
| --------- | ---------------------- | ------------- | ------------------ | --------------------- | --------------------- |
| String    | `String s = "Hello";`  | `s = "Hello"` | `let s = "Hello";` | `string s = "Hello";` | `char s[] = "Hello";` |
| Length    | `s.length()`           | `len(s)`      | `s.length`         | `s.length()`          | `strlen(s)`           |
| Character | `s.charAt(i)`          | `s[i]`        | `s[i]`             | `s[i]`                | `s[i]`                |
| Output    | `System.out.println()` | `print()`     | `console.log()`    | `cout`                | `printf()`            |

---

## Reverse Loop

### Java / C++ / JavaScript / C

```text
for (i = length - 1; i >= 0; i--)
```

### Python

```python
for i in range(len(s) - 1, -1, -1):
```

Python's `range()` follows:

```text
range(start, stop, step)
```

For example:

```python
range(4, -1, -1)
```

produces:

```text
4 → 3 → 2 → 1 → 0
```

---

## Important Language Differences

### Java

* String length: `length()`
* Character access: `charAt(i)`
* Output: `System.out.println()`

### Python

* String length: `len()`
* Character access: `s[i]`
* Reverse iteration: `range()`
* Output: `print()`

### JavaScript

* String length is a **property**: `s.length`
* It is not `s.length()`.
* Output: `console.log()`

### C++

* String length: `length()`
* Character access: `s[i]`
* Uses `cout` for output.

### C

* Strings are character arrays.
* `strlen()` is used to find length.
* `strlen()` requires `<string.h>`.
* Strings end with the null character `'\0'`.

---

## Key Takeaway

This problem helped me revise the complete basic flow of string manipulation:

**String → Length → Index → Character Access → Loop → Reverse Logic → Output**

The main learning was understanding how the **same logic is implemented with different syntax in five programming languages**.

---

## Complexity

* **Time:** `O(n)`
* **Space:** `O(n)`

---

## Solutions

* [Java](./java/ReverseString.java)
* [Python](./python/reverse_string.py)
* [JavaScript](./javascript/ReverseString.js)
* [C++](./cpp/ReverseString.cpp)
* [C](./c/ReverseString.c)

**Status:** ✅ Completed in 5 Languages
