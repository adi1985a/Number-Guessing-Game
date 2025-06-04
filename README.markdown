# 🎯🔢 NumberGuesser Pro: The 1-100 Challenge 🏆
_A classic C++ console game where you test your intuition to guess the secret number and aim for the high score!_

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![Platform: Windows](https://img.shields.io/badge/Platform-Windows-lightgrey.svg)](https://www.microsoft.com/windows)

## 📝 Project Description

**NumberGuesser Pro** is an engaging and colorful console-based C++ application that challenges players to guess a randomly generated number between 1 and 100. The game provides immediate feedback, guiding players with "higher" or "lower" hints. Success is rewarded with a score based on the number of attempts taken, encouraging players to strategize and guess efficiently. The game features vibrant ASCII art for a more immersive experience, tracks the all-time high score, and includes robust input validation to ensure smooth gameplay. Can you become the ultimate NumberGuesser Pro?

![Demo GIF](screenshots/1.gif)

## ✨ Key Features

*   🎯 **Classic Guessing Gameplay**: Try to guess a secret number randomly chosen between 1 and 100.
*   💯 **Attempt-Based Scoring**: Earn points based on your guessing prowess:
    *   100 points for 5 or fewer attempts.
    *   50 points for 6 to 10 attempts.
    *   25 points for more than 10 attempts.
*   🏆 **High Score Tracking**: The game remembers and displays the best score achieved, motivating you to beat it!
*   🎨 **ASCII Art Visuals**: Enjoy custom ASCII art for the welcome screen and when you correctly guess the number.
*   ⬆️⬇️ **Helpful Hints**: Receive "Too high!" or "Too low!" clues after each guess to narrow down the possibilities.
*   🌈 **Colorful Console Interface**: Utilizes Windows console functions for a more vibrant and engaging user experience.
*   ✔️ **Input Validation**: Ensures that player inputs are valid numbers within the 1-100 range.
*   🔄 **Play Again Option**: Easily start a new game after finishing a round.

## 🖼️ Screenshots

_Screenshots showcasing the game's ASCII art, hints, and scoring._
<p align="center">
  <img src="screenshots\1.jpg" width="300"/>
  <img src="screenshots\3.jpg" width="300"/>
  <img src="screenshots\4.jpg" width="300"/>
  <img src="screenshots\5.jpg" width="300"/>
</p>


## ⚙️ System Requirements

*   **Operating System**: Windows (due to the use of `windows.h` for console color manipulation and other specific functions).
*   **C++ Compiler**: Any modern C++ compiler that supports C++11 or newer (e.g., g++, MinGW, Clang, MSVC).
*   **No External Dependencies**: The game is self-contained and relies only on standard C++ libraries and `windows.h`.

## 🛠️ Installation and Running

1.  **Clone the Repository**:
    ```bash
    git clone <repository-url>
    ```
    (Replace `<repository-url>` with the actual URL of your repository)

2.  **Navigate to the Project Directory**:
    ```bash
    cd <repository-directory>
    ```
    (Replace `<repository-directory>` with the name of the cloned folder)

3.  **Compile the Program**:
    Open a terminal (like Command Prompt or PowerShell) in the project directory.
    **Example using g++ (MinGW):**
    ```bash
    g++ main.cpp -o number_guessing_game.exe -static-libgcc -static-libstdc++
    ```
    *(Assuming your main source code file is `main.cpp`)*

4.  **Run the Game**:
    After successful compilation, execute the generated program:
    ```bash
    ./number_guessing_game.exe
    ```
    or simply in CMD:
    ```bash
    number_guessing_game.exe
    ```

## ▶️ How to Play

1.  Launch the game as described in the "Installation and Running" section.
2.  You'll be greeted by the welcome screen. Press **Enter** to start a new game.
3.  The game will secretly pick a number between 1 and 100.
4.  Enter your guess (a number between 1 and 100) and press **Enter**.
5.  The game will tell you if your guess is "Too high!" or "Too low!" and display your current attempt count.
6.  Continue guessing until you find the correct number.
7.  Once you guess correctly, your score for that round and the current high score will be displayed.
8.  You will then be asked if you want to play again. Type `y` (yes) or `n` (no) and press **Enter**.

## 💡 Game Mechanics & Technical Details

*   **Random Number Generation**: The secret number is generated using C++'s random number facilities, seeded with the current time (`srand(time(0))`) to ensure a different number in most game sessions.
*   **Input Validation**: The game checks if the player's input is a valid integer and falls within the 1-100 range. If not, it prompts the player to enter a valid number.
*   **Scoring Logic**: The score is determined by the number of attempts taken, as detailed in the "Key Features" section.
*   **High Score Persistence**: The high score is typically stored in a simple way (e.g., a local file or just in memory for the session, depending on implementation – the provided description doesn't specify persistent storage beyond the current session).
*   **Console Manipulation**: Windows-specific functions from `windows.h` are used to set text colors, enhancing the visual appeal of the console interface.

## 🤝 Contributing

Contributions to **NumberGuesser Pro** are welcome! If you have ideas for new features, improvements, or bug fixes:

1.  Fork the repository.
2.  Create a new branch for your changes: `git checkout -b feature/your-enhancement`
3.  Make your modifications and commit them: `git commit -m "Add: Your enhancement"`
4.  Push your changes to your branch: `git push origin feature/your-enhancement`
5.  Open a Pull Request.

Please ensure your code follows the existing style and includes comments where appropriate.

## ✍️ Author

**Adrian Lesniak**
_C++ Developer & Game Enthusiast_


## 📃 License

This project is licensed under the **MIT License**.
The full text of the license is available at: [https://opensource.org/licenses/MIT](https://opensource.org/licenses/MIT)

---
🎉 _Happy Guessing! Can you achieve the perfect score?_
