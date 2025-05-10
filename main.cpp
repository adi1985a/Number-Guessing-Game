#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include <random>
#include <limits>

using namespace std;

class Gra {
private:
    int wylosowana_liczba;
    int twoja_liczba;
    int liczba_losowan;
    int highest_score;

    void displayWelcomeScreen() {
        system("cls");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); // Yellow
        cout << R"(
    ____                     _   _                                  _           
   / ___|_   _  ___  ___ __| | | |_ ___  ___   _ __  _   _ _ __ | |__   ___ _ __ 
  | |  _| | | |/ _ \/ __/ _` | | __/ _ \/ __| | '_ \| | | | '_ \| '_ \ / _ \ '__|
  | |_| | |_| |  __/ (_| (_| | | ||  __/\__ \ | | | | |_| | |_) | |_) |  __/ |   
   \____|\__,_|\___|\___\__,_|  \__\___||___/ |_| |_|\__,_| .__/|_.__/ \___|_|   
                                                           |_|                      
        )" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // White
        cout << "\nWelcome to the Number Guessing Game!" << endl;
        cout << "Try to guess the number between 1 and 100." << endl;
        cout << "\nScoring system:" << endl;
        cout << "* 5 or fewer attempts: 100 points" << endl;
        cout << "* 6-10 attempts: 50 points" << endl;
        cout << "* More than 10 attempts: 25 points" << endl;
        cout << "\nPress Enter to start...";
        cin.get();
    }

    void displayWinScreen(int score) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); // Green
        cout << R"(
   _____ _____ _   _ _____ ____    _ _____ _____ 
  /  ___|  _  | \ | |  __ |  _  \| |  _  |_   _|
  \ `--.| | | |  \| | |  \| | | || | | | | | |  
   `--. | | | | . ` | | __| | | || | | | | | |  
  /\__/ | |/ /| |\  | |_\ | |/ / | \ \_/ / | |  
  \____/|___/ \_| \_/\____/___/  |_|\___/  \_/  
        )" << endl;
        cout << "\nYour score: " << score << " points!" << endl;
        if (score > highest_score) {
            cout << "New high score!" << endl;
            highest_score = score;
        }
        cout << "High score: " << highest_score << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // White
    }

    bool validateInput() {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // Red
            cout << "Please enter a valid number!" << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // White
            return false;
        }
        if (twoja_liczba < 1 || twoja_liczba > 100) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // Red
            cout << "Please enter a number between 1 and 100!" << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // White
            return false;
        }
        return true;
    }

    int calculateScore() {
        if (liczba_losowan <= 5) return 100;
        if (liczba_losowan <= 10) return 50;
        return 25;
    }

public:
    Gra() : highest_score(0) {}

    void zgadnij_i_sprawdz() {
        do {
            displayWelcomeScreen();
            system("cls");
            
            liczba_losowan = 0;
            srand(time(NULL));
            wylosowana_liczba = rand() % 100 + 1;

            while (true) {
                cout << "\nEnter a number from 1 to 100: ";
                cin >> twoja_liczba;
                liczba_losowan++;

                if (!validateInput()) continue;

                if (wylosowana_liczba == twoja_liczba) {
                    system("cls");
                    int score = calculateScore();
                    displayWinScreen(score);
                    break;
                }

                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); // Yellow
                if (wylosowana_liczba > twoja_liczba) {
                    cout << "^^ The number is HIGHER! ";
                } else {
                    cout << "vv The number is LOWER! ";
                }
                cout << "Attempts: " << liczba_losowan << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // White
            }

            cout << "\nWould you like to play again? (y/n): ";
            char playAgain;
            cin >> playAgain;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (playAgain != 'y' && playAgain != 'Y') break;

        } while (true);
    }
};

int main() {
    Gra G1;
    G1.zgadnij_i_sprawdz();
    return 0;
}
