#include <iostream>
#include <random>

int atmpts = 1;
int highscore = 3000;

void editatmpt() {
    atmpts = atmpts + 1;
}

void retry() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 50);

    int number = dist(gen);
    int guess = 0;

    do {
        std::cout << "Guess a random number between 1 and 50!\n";
        std::cin >> guess;
        if (guess > number) {
            std::cout << "Lower\n";
            editatmpt();
        }
        else if (guess < number) {
            std::cout << "Higher\n";
            editatmpt();
        }
    } while (guess != number);
    if (atmpts < highscore) {
        highscore = atmpts;
    }
    std::string a;
    std::cout << "You guessed the correct number!!\n It took you " << atmpts << " to guess the correct number.\n Your current highscore is " << highscore << ".\n Would you like to play again? (Y/N)\n";
    std::cin >> a;
    if (a == "Y") {
        retry();
    }
    if (a == "N") {
    }
}

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 50);

    int number = dist(gen);
    int guess = 0;

    do {
        std::cout << "Guess a random number between 1 and 50!\n";
        std::cin >> guess;
        if (guess > number) {
            std::cout << "Lower\n";
            editatmpt();
        }
        else if (guess < number) {
            std::cout << "Higher\n";
            editatmpt();
        }
    } while (guess != number);
    if (atmpts < highscore) {
        highscore = atmpts;
    }
    std::string a;
    std::cout << "You guessed the correct number!!\n It took you " << atmpts << " to guess the correct number.\n Your current highscore is " << highscore << ".\n Would you like to play again? (Y/N)\n";
    std::cin >> a;
    if (a == "Y") {
        retry();
    }
    else if (a == "N") {
        return 0;
    }
}