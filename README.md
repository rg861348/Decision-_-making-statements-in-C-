Aim: To study and implement C++ decision making statements.

Tool: VS Code

Theory: Conditional Statements in C++: In C++, conditional statements help control the flow of a program. They let the program make decisions and execute different pieces of code depending on whether a condition is true or false. The three main types of conditional structures are: if-else, nested if-else, and switch-case.

if-else Statement: The if-else statement is the most basic decision-making tool in C++. It runs one block of code when a condition is true, and another block when it's false.

The if block runs when the condition is true. The else block runs when the condition is false. This allows a program to make a two-way choice depending on the situation or input.

Nested if-else: A nested if-else is when an if or else block contains another if-else structure inside it. This is useful when you need to check multiple conditions in a step-by-step or layered way. It helps in handling more complex decisions where one condition depends on another.

Switch-case Statement: The switch-case statement is a cleaner way to handle many possible values for a single variable, instead of writing many if-else if blocks. The switch evaluates a variable or expression. Each case checks for a specific constant value. break is used to stop the program from continuing into the next case. default runs if none of the cases match.

Using switch-case makes the code easier to read and manage, especially when dealing with things like menus, options, or commands.

Program 1: Check Even or Odd

Step-wise Algorithm

1. Start the program.


2. Declare an integer variable num.


3. Prompt the user to enter a number.


4. Read the input into num.


5. Check if num % 2 == 0

If true, print “Even”.

Else, print “Odd”.



6. End the program.




 Program 2: Check Vowel or Consonant

Step-wise Algorithm

1. Start the program.


2. Declare a character variable ch.


3. Prompt the user to enter a character.


4. Read input into ch.


5. Check if ch is any of: 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'

If true, print “Vowel”.

Else, print “Consonant”.



6. End the program.


 Program 3: Find Largest Among Three Numbers (Nested if-else)

Step-wise Algorithm

1. Start the program.


2. Declare three variables: a, b, c.


3. Prompt the user to enter three numbers.


4. Read the values into a, b, and c.


5. Check the following conditions using nested if-else:

If a > b and a > c, print “a is the largest”.

Else if b > c, print “b is the largest”.

Else, print “c is the largest”.



6. End the program.


 Program 4: Subject Selector using Switch Case

Step-wise Algorithm

1. Start the program.


2. Display subject menu (e.g., 1. Math, 2. Physics, etc.).


3. Prompt the user to enter their choice (1 to 5).


4. Read input into variable choice.


5. Use switch(choice):

Case 1: Print "Math"

Case 2: Print "Physics"

Case 3: Print "Chemistry"

Case 4: Print "Biology"

Case 5: Print "Computer Science"

Default: Print “Invalid choice”



6. End the program.




Program 5: Basic Arithmetic Calculator (Switch Case)

Step-wise Algorithm

1. Start the program.


2. Declare two float variables a and b.


3. Declare a character variable op for the operator.


4. Prompt the user to enter two numbers.


5. Read values into a and b.


6. Display operation menu (+, -, *, /).


7. Prompt the user to enter an operator (op).


8. Use switch(op):

Case '+': Compute a + b, print “Sum: result”.

Case '-': Compute a - b, print “Difference: result”.

Case '*': Compute a * b, print “Product: result”.

Case '/':

If b == 0, print “Cannot divide by zero”.

Else compute a / b, print “Quotient: result”.


Default: Print “Invalid operation”.

9. End the program.

Conclusion: We learned that if-else is used to check complex conditions and switch-case is suitable for fixed or pre-defined options.
