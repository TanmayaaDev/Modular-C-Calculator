# 🌳 Expression Tree Evaluator (Modular C)

A professional, modular C application that constructs a **Binary Expression Tree** from prefix notation and evaluates the result using recursive traversal.

## 🎯 Project Overview
This project demonstrates advanced C programming concepts by building a tree structure where internal nodes are operators and leaf nodes are operands. It satisfies the requirement of using **Recursive Logic** instead of a manual Stack structure.

## 📂 Modular Structure
To maintain clean code and separation of concerns, the project is split into:
* `tree_lib.h`: The header file containing the `struct` definition and function prototypes.
* `tree_logic.c`: The core engine containing the recursive logic for building and evaluating the tree.
* `main.c`: The entry point that handles user input and displays the results.

## 🛠️ How to Compile & Run
To compile all modules together:
```bash
gcc main.c tree_logic.c -o calculator
./calculator

📝 Example Usage
The program expects Prefix Notation (Operator first).

Input: * + 2 3 4

Internal Logic: Represents (2 + 3) * 4

Output: Final Result: 20

💎 Key Features
In-order Traversal: Displays the mathematical expression with proper parentheses.

Memory Safety: Includes a deleteTree function to free all allocated heap memory.

Header Guards: Uses #ifndef to prevent redefinition errors.