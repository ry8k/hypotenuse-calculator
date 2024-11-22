# 📐 Hypotenuse Calculator in C++

This C++ program provides a simple and efficient way to calculate the hypotenuse of a right triangle using the Pythagorean theorem.

## 🌟 Features

• User-friendly command-line interface
• Accurate calculation using the `<cmath>` library
• Demonstrates use of C++ standard input/output streams
• Includes alternative calculation method in comments

## 🖥️ Code Overview

The program consists of these main components:

1. User input for sides A and B
2. Calculation of the hypotenuse (side C)
3. Output of the result

Key C++ elements used:
• `<iostream>` for input/output operations
• `<cmath>` for mathematical functions (`sqrt()` and `pow()`)
• `double` data type for precise calculations

## 🚀 How to Use

1. Clone the repository:
```bash
git clone https://github.com/ry8k/hypotenuse-calculator
cd hypotenuse-calculator
```

2. Compile the program:
```bash
g++ hypotenuse_calculator.cpp -o hypotenuse_calculator
```

3. Run the executable:
```bash
./hypotenuse_calculator
```

4. Follow the prompts to enter the lengths of sides A and B

## 💻 Code Snippet

```cpp
double c = sqrt(pow(a, 2) + pow(b, 2));
```
This line calculates the hypotenuse using the Pythagorean theorem: c² = a² + b²

## 🔍 Alternative Method

The code also includes a commented-out alternative calculation method:

```cpp
a = pow(a, 2);
b = pow(b , 2);
c = sqrt(a + b);
```

This method pre-calculates the squares of a and b before finding the square root.

## 📚 Learning Points

• Using C++ standard libraries
• Working with user input and output
• Applying mathematical formulas in programming
• Code commenting for alternative solutions

## 🤝 Contributions

Feel free to fork this repository and submit pull requests to enhance the calculator. Some ideas for improvement:
• Add error handling for invalid inputs
• Extend functionality to calculate other triangle properties
• Implement a graphical user interface

Happy coding and triangle solving! 🔢✨
