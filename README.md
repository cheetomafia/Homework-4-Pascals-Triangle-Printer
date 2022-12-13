# Homework-4-Pascals-Triangle-Printer
Homework 4
===
In this homework you will print out Pascal's Triangle for up to 9 rows.

Pascal's Triangle
===
Pascal's triangle is a construction that represents binomial coefficients. 
* The first row is a single value of 1.
* Subsequent row elements are the sum of left and right values in the previous row.
* Values of 0 are to be treated as blank entries
* For repl.it spaces are to be replaced with '.' for test case mathing purposes.

Example Triangle
===
  ........1<br>
  ......1...1<br>
  ....1...2...1<br>
  ..1...3...3...1<br>
  1...4...6...4...1

Requirement
===
1. Top row must be centered
2. Double digits must align to the right of other rows with single digit
3. Need to support up to 9 rows
4. Be sure to use . where a space should be

Hints
===
Simpler formula for summing left and right for each row<br>
Initialize: x = 1<br>
x = x * (i-j)/(j+1)<br>
Where i represents row and j represents column
