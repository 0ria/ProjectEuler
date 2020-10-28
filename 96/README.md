# Project Euler #96: Su Doku

Su Doku (Japanese meaning number place) is the name given to a popular puzzle concept. Its origin is unclear, but credit must be attributed to Leonhard Euler who invented a similar, and much more difficult, puzzle idea called Latin Squares. The objective of Su Doku puzzles, however, is to replace the blanks (or zeros) in a 9 by 9 grid in such that each row, column, and 3 by 3 box contains each of the digits 1 to 9. Below is an example of a typical starting puzzle grid and its solution grid.

A well constructed Su Doku puzzle has a unique solution and can be solved by logic, although it may be necessary to employ "guess and test" methods in order to eliminate options (there is much contested opinion over this). The complexity of the search determines the difficulty of the puzzle; the example above is considered easy because it can be solved by straight forward direct deduction.

You are given a number of Su Doku. All of them could be solved without guessing and even backtracking. Surely, you may write every solution that passes tests and fits into contraints.

## Input Format

9 lines each containg 9 characters '0'-'9'. '0' means that the place is empty otherwise the place contains corresponding digit.

## Output Format

Output the result in the same format as input with no zeroes left.