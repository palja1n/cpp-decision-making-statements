# Decision Making Statements in C++

Name: Pal Jain

PRN: 24070123067

ENTC A3

Title: Decision Making in C++

In programming, decision making allows a program to choose different paths based on conditions. It's similar to how we take decisions in daily life — for example, “If it's raining, take an umbrella. Otherwise, don't.”

C++ provides several decision control structures that help implement logic in programs. These include if, if-else, else-if, nested conditions, and switch-case. These constructs make programs smarter by allowing them to respond differently to different inputs or situations.

# Types of Decision Making in C++
1. if Statement
Executes a block of code only if a given condition is true.

2. if-else Statement
Runs one block if the condition is true, and another if it's false.

3. else-if Ladder
Used when multiple conditions need to be checked one after another.

4. Nested if
An if condition inside another if. Used when one condition depends on another.

5. switch-case
Best for fixed options (like menu choices or operator-based programs). Compares a variable with several constant cases and executes the matching one.


# Program on decision making
1. Even or Odd Checker
Checks if a number is divisible by 2. Uses the modulus operator and if-else condition to determine and display whether the number is even or odd.

Sample Output:
Enter the number: 78
The given number is even number.


2. Vowel or Consonant Identifier
Accepts a character input and checks whether it's a vowel using either if-else or a switch case. If not a vowel, it’s treated as a consonant.

Sample Output:
Enter a character. p The given character is a consonant.


3. Largest of Three Numbers
Takes three numbers and uses else-if ladder or nested if to compare and determine the largest among them.

Sample Output:

Enter the value of a. 67
Enter the value of b. 89
Enter the value of c. 90
c is the largest number.


4. Simple Calculator
Implements a calculator using a switch statement. Based on the operator entered (+, -, *, /), it performs the respective arithmetic operation.

Sample Output:

Enter an operator (+, -, *, /): /

Enter two numbers: 10 2

10 / 2 = 5


5. Switch case with break statements (fruit shop Program)
Menu-driven application using switch-case. Displays a fruit item's cost based on the user's numeric choice. A default message is shown for invalid selections.

Sample Output:

Welcome to the Fruit Shop!
1. Apple
2. Banana
3. Mango
4. Grapes
5. Orange
6. Strawberry
7. Watermelon
Enter the number of the fruit you want to buy: 7
Watermelon costs ₹60 per piece.

# Algorithms
1. Even or Odd Checker
Take input as a number n.
Check if n % 2 == 0.
If true, print “Even”.
Else, print “Odd”.


3. Vowel or Consonant
Take a character input.
Convert it to lowercase (if needed).
If it is a, e, i, o, or u, print “Vowel”.
Else, print “Consonant”.


5. Largest of Three Numbers
Take input: a, b, and c.
If a > b and a > c, print “a is largest”.
Else if b > c, print “b is largest”.
Else, print “c is largest”.

# Conclusion
Decision-making statements are the backbone of logical flow in C++ programs. Whether it's a basic check using if, evaluating multiple paths using else-if, or using switch for cleaner alternatives, these tools make your programs flexible and responsive. The examples shared cover common scenarios and form a strong foundation for real-world programming logic.
