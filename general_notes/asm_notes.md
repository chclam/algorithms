# Hexidecimal System
Humans use a decimal system for counting, computers represent numbers in a binary system. Binary systems can be hard to remember and decipher for humans, thus introducing the hexidecimal system: a base-16 numbering system. This system starts counting at 0 until 9 as you would normally expect, but 9 + 1 in hexidecimal is A, which is 10 in our conventional decimal system. Therefore, numbers 0 - 9 are represented by 0 - 9, but 10 - 15 are represented by A - F. F + 1 (15 + 1 in decimal) is then represented as 10 in hex. Following is a table of decimal -> hexidecimal:

| Dec | Hex |
|-----|-----|
| 0   | 0   |
| 1   | 1   |
| 2   | 2   |
| 3   | 3   |
| 4   | 4   |
| 5   | 5   |
| 6   | 6   |
| 7   | 7   |
| 8   | 8   |
| 9   | 9   |
| 10  | A   |
| 11  | B   |
| 12  | C   |
| 13  | D   |
| 14  | E   |
| 15  | F   |
| 16  | 10  |
| 17  | 11  |

Consider the following example. Suppose that we want to convert the following hexidecimal number to decimal:

0000 000B A43B 7400

Then the following computation is made for conversion:

> 11 * (16 ** 8) + 10 * (16 ** 7) + 4 * (16 ** 6) + 3 * (16 ** 5) + 11 * (16 ** 4) + 7 * (16 ** 3) + 4 * (16 ** 2) = 50000000000


