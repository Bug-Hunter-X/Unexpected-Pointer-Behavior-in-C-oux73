# Unexpected Pointer Behavior in C

This repository demonstrates a common but easily overlooked error in C programming involving pointers. Modifying a value through a pointer directly affects the original variable. This can lead to unexpected consequences if not properly understood.  The `bug.c` file shows the error, and `bugSolution.c` provides a possible solution or a more robust approach.

## Understanding the Issue

Pointers in C provide a powerful way to manipulate memory addresses. However, they require careful handling to avoid pitfalls.  Incorrect usage can result in unexpected modifications of variables, leading to bugs that are difficult to trace.