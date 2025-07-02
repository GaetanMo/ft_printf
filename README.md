# 🖨️ ft_printf – 42 Project

A custom implementation of the C standard library function `printf`, created without using the standard `printf` function or related helpers.

> Built as part of the 42 curriculum to deepen understanding of variadic functions, formatted output, and low-level C programming concepts.

---

## 🎯 Objectives

- Reproduce the behavior of the standard `printf` function.
- Handle multiple format specifiers:
  - `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`
- Work with variadic arguments using `stdarg.h`.
- Manage output formatting and write to standard output.
- Understand memory management and edge cases in string handling.

---

## 🛠️ Features

- Supports all mandatory conversion specifiers required by the project.
- Proper handling of variable argument lists.
- Handles NULL pointers and edge cases gracefully.
- Returns the number of characters printed, matching the behavior of the standard `printf`.
- Written in pure C, no external libraries used.

---

## 📦 Installation

```bash
git clone https://github.com/GaetanMo/ft_printf.git
make
