#include <stdio.h>
int main()
{
    int a = 9, b = 3, c;
    int *ptr = &a;
    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);
    // Relational Operators
    printf("Relational Operators:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n\n", a <= b);
    // Logical Operators
    printf("Logical Operators:\n");
    printf("(a > 0 && b > 0): %d\n", (a > 0 && b > 0));
    printf("(a > 0 || b < 0): %d\n", (a > 0 || b < 0));
    printf("!(a == b): %d\n\n", !(a == b));
    // Bitwise Operators
    printf("Bitwise Operators:\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n\n", a >> 1);
    // Assignment Operators
    printf("Assignment Operators:\n");
    c = a;
    c += b;
    printf("c += b: %d\n", c);
    c -= b;
    printf("c -= b: %d\n", c);
    c *= b;
    printf("c *= b: %d\n", c);
    c /= b;
    printf("c /= b: %d\n", c);
    c %= b;
    printf("c %%= b: %d\n\n", c);
    // Increment/Decrement Operators
    printf("Increment/Decrement Operators:\n");
    printf("a++ = %d\n", a++);
    printf("Now a = %d\n", a);
    printf("++a = %d\n", ++a);
    printf("a-- = %d\n", a--);
    printf("Now a = %d\n", a);
    printf("--a = %d\n\n", --a);
    // Conditional (Ternary) Operator
    printf("Conditional Operator:\n");
    int max = (a > b) ? a : b;
    printf("Max of a and b: %d\n\n", max);
    // sizeof Operator
    printf("sizeof Operator:\n");
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n\n", sizeof(char));
    // Address Operators
    printf("Pointer Operators:\n");
    printf("Address of a: %d\n", &a);
    // swap numbers
    a = a + b;
    b = a - b;
    a = a - b;
    printf("the new swap values of a and b are %d and %d", a, b);

    return 0;
}
outputs
Arithmetic Operators:
a + b = 12
a - b = 6
a * b = 27
a / b = 3
a % b = 0

Relational Operators:
a == b: 0
a != b: 1
a > b: 1
a < b: 0
a >= b: 1
a <= b: 0

Logical Operators:
(a > 0 && b > 0): 1
(a > 0 || b < 0): 1
!(a == b): 1

Bitwise Operators:
a & b = 1
a | b = 11
a ^ b = 10
~a = -10
a << 1 = 18
a >> 1 = 4

Assignment Operators:
c += b: 12
c -= b: 9
c *= b: 27
c /= b: 9
c %= b: 0

Increment/Decrement Operators:
a++ = 9
Now a = 10
++a = 11
a-- = 11
Now a = 10
--a = 9

Conditional Operator:
Max of a and b: 9

sizeof Operator:
Size of int: 4 bytes
Size of float: 4 bytes
Size of char: 1 bytes

Pointer Operators:
Address of a: 958397652
the new swap values of a and b are 3 and 9
