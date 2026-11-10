# Random Number Guessing Game in C

## About the Project

This is a simple number guessing game that I created using C programming. The program generates a random number between 1 and 100, and the user has to guess it.

If the guessed number is greater than the actual number, the program asks the user to try a lower number. If it is smaller, the program asks the user to try a higher number.

The game continues until the user guesses the correct number. At the end, it displays the total number of attempts taken.

## Features

- Generates a random number between 1 and 100.
- Gives hints after every incorrect guess.
- Allows unlimited attempts.
- Counts the total number of guesses.
- Displays a message when the correct number is guessed.

## Concepts Used

- Variables and data types
- If-else statements
- Do-while loop
- Random number generation using `rand()` and `srand()`
- User input using `scanf()`

## Sample Output

```text
THIS IS A RANDOM GUESSING GAME.
GUESS A RANDOM NUMBER BETWEEN 1 TO 100
Enter a number to guess:

50
You guessed wrong! Try a lower number.

25
You guessed wrong! Try a higher number.

35
Congrats! You guessed it correctly.

You guessed correctly in 3 attempts.
```

## How to Run

1. Download the C file from this repository.
2. Open it in VS Code or any C compiler.
3. Compile and run the program.
4. Enter numbers between 1 and 100 until you guess correctly.

## What I Learned

While making this project, I practiced using conditional statements and loops in C. I also learned how to generate random numbers and use a counter to track the number of attempts.

This is one of my beginner C programming projects, and I plan to make more projects as I continue learning.
