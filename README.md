Aim: To study and implement C++ decision making statements.

Tool: VS Code

Theory: Conditional Statements in C++: In C++, conditional statements help control the flow of a program. They let the program make decisions and execute different pieces of code depending on whether a condition is true or false. The three main types of conditional structures are: if-else, nested if-else, and switch-case.

if-else Statement: The if-else statement is the most basic decision-making tool in C++. It runs one block of code when a condition is true, and another block when it's false.

The if block runs when the condition is true. The else block runs when the condition is false. This allows a program to make a two-way choice depending on the situation or input.

Nested if-else: A nested if-else is when an if or else block contains another if-else structure inside it. This is useful when you need to check multiple conditions in a step-by-step or layered way. It helps in handling more complex decisions where one condition depends on another.

Switch-case Statement: The switch-case statement is a cleaner way to handle many possible values for a single variable, instead of writing many if-else if blocks. The switch evaluates a variable or expression. Each case checks for a specific constant value. break is used to stop the program from continuing into the next case. default runs if none of the cases match.

Using switch-case makes the code easier to read and manage, especially when dealing with things like menus, options, or commands.

Program 1: Check Even or Odd Algorithm:

Start Input an int num If num % 2 == 0, print "Even" Else, print "Odd" End

Program 2: Check Vowel or Consonant Algorithm:

Start Input a character ch If ch is a vowel (a, e, i, o, u or A, E, I, O, U), print "Vowel" Else, print "Consonant" End

Program 3: Identify the Largest Number Among Three (Nested if) Algorithm:

Start Input three numbers a, b, c If a > b and a > c, print "a is largest" Else if b > c, print "b is largest" Else, print "c is largest" End

Program 4: Subject Selector using Switch Case Algorithm:

Start Display subject menu (1–5) Input user choice Use switch to print subject name based on choice If choice not in 1–5, print "Invalid choice" End

Program 5: Basic Arithmetic Calculator using Switch case Algorithm:

Start Input two numbers a, b Display operation menu (+, -, *, /) Input user choice Use switch to perform selected operation If division and b == 0, print "Cannot divide by zero" If invalid choice, print "Invalid operation" Print result End

Conclusion: We learned that if-else is used to check complex conditions and switch-case is suitable for fixed or pre-defined options.
