# Evaluation-of-prefix-expression
A C language code to evaluate a prefix expression

INTRODUCTION
Prefix expressions are those expression in which the operator comes before the operands.

Few examples are;

INFIX FORM: (A+B)                    PREFIX FORM: +AB

INFIX FORM:(((((9+8)-7)*6)/5)^4)     PREFIX FORM:^/*-+987654

ALGORITM TO EVALUATE PREFIX EXPRESSION

ASSUMPTIONS:

It is assumed that the entered prefix expression is valid.

Only single digit numbered inputs are valid , if double digit numbers are entered they are treated as two single digit inputs.

Only operators + , - , * , / and ^ are valid other operators are not allowed. 

STEPS:

STEP – 1

Input the prefix expression to evaluate and store it as a string.

Find the length of the string.

Using a for loop traverse from the right end of the expression to the left end of the expression and for each symbol scanned follow STEP – 2.

STEP – 2

Since it is prefix expression the scanned symbol can be either an operand or an operator.

If the scanned symbol is an operand just push it into the stack of type integer.

If the scanned symbol is an operator then pop the topmost element and store the value in ‘A’ and then pop the next topmost element and store the value in ‘B’ then perform the operation; ‘C’=‘A’ operator ‘B’

STEP – 3

Push the value of ‘C’ back into the stack.

Scan for the next symbol and repeat STEP – 2 and STEP – 3 till the leftmost symbol is scanned.

STOP.

NOTE:

At the end of the algorithm the stack will have only one element and that is the evaluated equivalent of the entered prefix expression.

To push a character(c) from string into the integer type stack(s) we use the statement; (s[++top]=c-’0’) this will ensure that the value of the character is pushed to the stack , not the ASCII value.

