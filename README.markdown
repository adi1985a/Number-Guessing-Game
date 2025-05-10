# Number Guessing Game

## Description
A C++ console application where players guess a random number between 1 and 100. Scores are awarded based on attempts: 100 (≤5), 50 (6-10), 25 (>10). Features ASCII art, colorful UI, high score tracking, and input validation. Created by Adrian Lesniak.

## Features
- Guess a number between 1 and 100
- Score based on number of attempts
- Track high score
- Display ASCII art for welcome and win screens
- Provide hints (higher/lower)
- Colorful console interface
- Input validation

## Requirements
- C++ compiler (e.g., g++)
- Windows OS (uses `windows.h`)

## Installation
1. Clone the repository:
   ```bash
   git clone <repository-url>
   ```
2. Compile the program:
   ```bash
   g++ main.cpp -o number_guessing_game
   ```

## Usage
1. Run the program:
   ```bash
   ./number_guessing_game
   ```
2. Press Enter to start.
3. Enter a number (1-100) to guess the hidden number.
4. Receive hints (higher/lower) and attempt count.
5. Upon guessing correctly, view score and high score.
6. Choose to play again (y/n).

## Notes
- Random number generation is seeded with the current time.
- Input validation ensures numbers are within 1-100.
- Uses Windows-specific console functions for color output.
- No external dependencies or header files required.

## Author
Adrian Lesniak

## License
MIT License