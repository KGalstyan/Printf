<h1 align="center">🖨️ ft_printf</h1>

<p align="center">
  <i>A custom implementation of the `printf` function in C, supporting formatted output for various data types.</i>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue.svg" />
  <img src="https://img.shields.io/badge/Project-ft_printf-yellowgreen.svg" />
  <img src="https://img.shields.io/badge/Status-Completed-brightgreen.svg" />
</p>

---

## 📌 Project Overview

**ft_printf** is an implementation of the standard C `printf` function. The goal of this project is to understand how formatted output works, implementing a simplified version of the original function. This version supports various format specifiers like `%d`, `%s`, `%x`, and `%p`, among others, while offering full control over memory and performance.

This project also helps strengthen skills in handling variadic functions in C and working with low-level output.

---

## 🔧 Features

- **Format Specifiers Supported:**
  - `%c` : Print a character
  - `%s` : Print a string
  - `%d`, `%i` : Print an integer
  - `%u` : Print an unsigned integer
  - `%x`, `%X` : Print a hexadecimal number
  - `%p` : Print a pointer address
  - `%%` : Print a literal `%` character
  
- **Flexible and Efficient Output:**
  - Custom formatting for padding, width, and precision
  - Efficient handling of output without using the standard `printf`
  
- **Implementation Details:**
  - **Variadic Functions** to handle different argument types
  - Support for **memory management** and handling large outputs efficiently

---

## 🚀 Getting Started

### 🔨 Build the Library

To clone and compile the project, follow these steps:

```bash
git clone https://github.com/yourusername/ft_printf.git
cd ft_printf
make
