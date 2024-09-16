Certainly! Here's a chart summarizing the associativity and precedence of operators in C, from highest to lowest precedence:

| Operator          | Description                         | Associativity    |
|-------------------|-------------------------------------|------------------|
| `()`              | Function call                       | Left to right    |
| `[]`              | Array subscript                     | Left to right    |
| `.` `->`          | Structure and union member access   | Left to right    |
| `++` `--`         | Postfix increment/decrement         | Left to right    |
| `++` `--`         | Prefix increment/decrement          | Right to left    |
| `+` `-`           | Unary plus/minus                    | Right to left    |
| `!` `~`           | Logical NOT, bitwise NOT            | Right to left    |
| `*` `/` `%`       | Multiplication, division, modulus   | Left to right    |
| `+` `-`           | Addition, subtraction               | Left to right    |
| `<<` `>>`         | Bitwise shift left, right           | Left to right    |
| `<` `<=` `>` `>=` | Relational operators                | Left to right    |
| `==` `!=`         | Equality operators                  | Left to right    |
| `&`               | Bitwise AND                         | Left to right    |
| `^`               | Bitwise XOR                         | Left to right    |
| `|`               | Bitwise OR                          | Left to right    |
| `&&`              | Logical AND                         | Left to right    |
| `||`              | Logical OR                          | Left to right    |
| `?:`              | Conditional (ternary) operator      | Right to left    |
| `=` `+=` `-=` `*=` `/=` `%=` `<<=` `>>=` `&=` `^=` `|=` | Assignment operators | Right to left    |
| `,`               | Comma operator                      | Left to right    |

### Notes:
- Operators with higher precedence are evaluated before operators with lower precedence.
- Operators with the same precedence are evaluated based on their associativity.
- Unary operators (e.g., `++`, `--`, `-`, `!`) have higher precedence than binary operators (e.g., `+`, `-`, `*`, `/`).
- Assignment operators (`=`, `+=`, `-=` etc.) have right-to-left associativity.

Understanding operator precedence and associativity is crucial for writing correct and efficient C programs, especially when expressions involve multiple operators.



(2 + 3) * 4 / (2 * 12)
10 - (3 + 5) * (2 / 4)
(15 / (3 - 2)) * 4 + 10
7 + (3 * (6 - 4)) / 2
9 * (2 - 5 + 8) / 4
(12 / 4) + (3 * 2) - 8
10 - (2 * 3) + (4 / 2)
(5 * 2) - (6 / 3) + 4
8 / (2 + 4) * 2 - 7
15 - (3 * 2) + (6 / 2)
20 / 4 - 3 + 5 * (2 + 4)
9 - 3 * (4 + 2) / 2 + 7
(8 - 2) * 3 / 2 + 4 - 1
18 / (2 * 3) + 5 - 1 * 4
12 - 4 * (5 + 2) / 2 + 6
